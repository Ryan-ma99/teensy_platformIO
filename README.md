## Package for Receiving Pneumatic Sensor Data

This package enables receiving pressure changes measured by a pneumatic sensor in a pneumatic pad from a Teensy board via ROS communication.

1. platformio: 

    PlatformIO is an open-source ecosystem for embedded development, supporting multiple platforms, frameworks, and boards. It provides a unified development environment with features like code editing, compiling, debugging, and library management.

    The platformio.ini file is the main configuration file for a PlatformIO project. It defines the project’s settings.

    In this package, the platformio.ini file is used to configure the platform, framework, and the version of Micro-ROS to be used.

2. main.cpp:    
   This is the source code file uploaded to the Teensy board. It enables receiving data collected from the Teensy board as a topic through Micro-ROS.

    you can change the node's name, topic name, and interface settings.



## How to use 

1. Check whether the ROS domain ID set in the code matches your own ROS domain ID.
   
2. Connect the Teensy board to the computer and check the each teensy portname (ex:/dev/ttyACM0)
   
3. Before uploading the main.cpp file, use the following command in the terminal.
   ```
   stty -F [portname] 134
   ```
    By using this command, it switches the Teensy into programming mode, allowing the Teensy Loader to find the specific Teensy among multiple boards.


4. Upload the main.cpp file to the specific Teensy board.



5. Once the upload is complete, enter the following command in the terminal to run the Micro-ROS agent:
   
    ```
    ros2 run micro_ros_agent micro_ros_agent serial --dev [portname]
    ```


    >If the agent cannot find the Teensy board after executing the above command, simply disconnect the USB cable from the computer and reconnect it. This should resolve the issue and allow the agent to detect the Teensy board.

    the node set in main.cpp will run, and pneumatic changes will be published as a topic.

6. To initialize the offset of the pneumatic sensor value, execute the offset reset service with the following command.

   ```
   ros2 service call /OffsetReset std_srvs/srv/Trigger "{}"
   ```


























  








