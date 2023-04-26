# Electronics-club-Meeting-4-26-2023
Shamelessly not mine

ESP32 Setup Guide
This guide will help you set up the ESP32 development board with the Arduino IDE and provide you with a basic example for controlling the built-in LED using a WiFi access point and a simple web interface.

Table of Contents
Requirements
Installing Drivers
Setting up Arduino IDE
Creating the LED Control Sketch
Uploading the Sketch
Testing the LED Control Web Interface
Requirements
ESP32 development board
USB cable (micro USB or USB-C, depending on the board)
Arduino IDE (download from https://www.arduino.cc/en/software)
Computer with a USB port and an internet connection
Installing Drivers
Download and install the CP210x USB to UART Bridge VCP drivers for your operating system from the Silicon Labs website:
Windows: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
Mac: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
Linux: Built-in kernel support, no need for additional drivers
Restart your computer after installing the drivers.
Setting up Arduino IDE
Open the Arduino IDE.
Go to File > Preferences.
Add the following URL to the "Additional Boards Manager URLs" field: https://dl.espressif.com/dl/package_esp32_index.json
Click "OK" to save the changes.
Go to Tools > Board > Boards Manager.
Search for "esp32" and install the package by Espressif Systems.
Creating the LED Control Sketch
Create a new sketch in the Arduino IDE.
Copy and paste the provided LED control sketch code into the new sketch.
Customize the ssid and password variables if desired.
Uploading the Sketch
Connect the ESP32 development board to your computer using the USB cable.
In the Arduino IDE, select the correct ESP32 board from the Tools > Board menu.
Set the correct COM port from the Tools > Port menu.
Click the "Upload" button in the Arduino IDE to upload the sketch to the ESP32.
Testing the LED Control Web Interface
After the upload is complete, a new WiFi access point with the name specified in the ssid variable should appear.
Connect to this access point using the password specified in the password variable.
Open a web browser and enter the IP address 192.168.4.1.
The webpage should display two buttons for turning the built-in LED on and off.
Congratulations! You have successfully set up your ESP32 development board and created a basic LED control example using a WiFi access point and a web interface. Feel free to expand and modify the provided code for your own projects and applications.
