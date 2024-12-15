#include <stdint.h>
#include <cstdint>
#include <stdio.h>
#include <Arduino.h>
#include <micro_ros_platformio.h>
#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/float32_multi_array.h>
#include <CD74HC4067.h>
#include <std_srvs/srv/trigger.h>

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

rcl_publisher_t publisher;
rcl_subscription_t subscriber;
rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t timer;
rcl_timer_callback_t callback;
std_msgs__msg__Int32 sub_msg;
rcl_ret_t rc;
rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
std_msgs__msg__Float32MultiArray Pressure_msgs;

rcl_service_t service;
std_srvs__srv__Trigger_Request req;
std_srvs__srv__Trigger_Response res;


CD74HC4067 my_mux(22, 23, 1, 2); // mux digital pin 정의

const int Analogpin = A7;
uint32_t cnt = 0;

// IIR 필터 관련 변수
float prev_y[16] = {0};
float OffsetValue[16] = {0};
float a = 0.2f;  // 필터 계수 a (예시 값)
float b = 0.8f;  // 필터 계수 b (예시 값)

// float 소수점 출력 필터 함수
float roundToDecimal(float value, int decimal) {
    float multiplier = powf(10.0f, decimal);  // 10의 decimal승 계산
    return roundf(value * multiplier) / multiplier;  // 반올림 후 원래 자릿수로 복원
}

void error_loop() {
  while(1) {
    delay(100);
  }
}

// 타이머 콜백 시에 publish 진행
void timer_callback(rcl_timer_t * timer, int64_t last_call_time) {
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    RCSOFTCHECK(rcl_publish(&publisher, &Pressure_msgs, NULL));
    cnt = 0;
  }
}

void service_callback(const void * req, void * res) {
  std_srvs__srv__Trigger_Response * res_in = 
    (std_srvs__srv__Trigger_Response *) res;
  // 실제 오프셋 리셋 작업 수행
  for (int i = 0; i < 16; i++) {
    my_mux.channel(i);
    OffsetValue[i] = analogRead(Analogpin);
  }
  // Offset success message
  res_in->success = true;
  const char * message = "Reset Success";
  if (res_in->message.capacity == 0) {
    res_in->message.data = (char*)malloc(100);
    res_in->message.capacity = 100;
  }
  snprintf(res_in->message.data, res_in->message.capacity, "%s", message);
  res_in->message.size = strlen(res_in->message.data);
}


void setup() {
  Serial.begin(4000000);
  set_microros_serial_transports(Serial);
  delay(2000);
  analogReadResolution(12);
  allocator = rcl_get_default_allocator();

  // ROS2 도메인 ID 설정
  //  /home/.bashrc 파일에 export ROS_DOMAIN_ID=[Domain_id_number] 기입
  RCCHECK(rcl_init_options_init(&init_options, allocator));
  RCCHECK(rcl_init_options_set_domain_id(&init_options, 10));  
  
  //create init_options init옵션 정의 
  RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

  // create node 노드 이름 정의 
  RCCHECK(rclc_node_init_default(&node, "link2_gauge", "", &support));

  // create publisher 토픽 이름, 유형 변경 가능
  RCCHECK(rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Float32MultiArray),
    "link2_data"))


  // create service
  RCCHECK(rclc_service_init_default(&service, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(std_srvs, srv, Trigger), "OffsetReset"));


  // create timer,
  const unsigned int Nano_timer_timeout = 5000000;
  RCCHECK(rclc_timer_init_default(
    &timer,
    &support,
    Nano_timer_timeout,
    timer_callback));

  // create executor
  RCCHECK(rclc_executor_init(&executor, &support.context, 5, &allocator));
  RCCHECK(rclc_executor_add_timer(&executor, &timer));
  RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, service_callback));

  // Initialize Float32MultiArray message
  Pressure_msgs.data.capacity = 16;
  Pressure_msgs.data.size = 16;
  Pressure_msgs.data.data = (float*) malloc(16 * sizeof(float));

  // Initialize MultiArrayLayout
  Pressure_msgs.layout.dim.capacity = 1;
  Pressure_msgs.layout.dim.size = 1;
  Pressure_msgs.layout.dim.data = (std_msgs__msg__MultiArrayDimension*) malloc(sizeof(std_msgs__msg__MultiArrayDimension));
  Pressure_msgs.layout.dim.data[0].label.data = (char*) malloc(20 * sizeof(char));
  snprintf(Pressure_msgs.layout.dim.data[0].label.data, 20, "pressure_readings");
  Pressure_msgs.layout.dim.data[0].label.size = strlen("pressure_readings");
  Pressure_msgs.layout.dim.data[0].label.capacity = 20;
  Pressure_msgs.layout.dim.data[0].size = 16;
  Pressure_msgs.layout.dim.data[0].stride = 1;
  
  delayMicroseconds(500);

  for (int i = 0; i < 16; i++) { // 센서 
    my_mux.channel(i);
    OffsetValue[i] = analogRead(Analogpin);
  }
  delayMicroseconds(500);
}

void loop() {
  for (int i = 0; i < 16; i++) { // 센서 
    my_mux.channel(i);
    
    uint16_t currentValue = analogRead(Analogpin);
    
    // Apply 1st order IIR filter
    float filtered_value = a * currentValue + b * prev_y[i];
    prev_y[i] = filtered_value;
    //전압 출력값 -> kpa 변화량으로 보정
    float Pout = (filtered_value-OffsetValue[i])/4096/0.8*5*6.895;
    Pressure_msgs.data.data[i] = roundToDecimal(Pout, 2); 
  }
  
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(1)));
}
 