# Electronics-club-Meeting-4-26-2023
Shamelessly not mine
# ESP32 Setup Guide

This guide will help you set up the ESP32 development board with the Arduino IDE and provide you with a basic example for controlling the built-in LED using a WiFi access point and a simple web interface.

## Table of Contents

1. [Requirements](#requirements)
2. [Installing Drivers](#installing-drivers)
3. [Setting up Arduino IDE](#setting-up-arduino-ide)
4. [Creating the LED Control Sketch](#creating-the-led-control-sketch)
5. [Uploading the Sketch](#uploading-the-sketch)
6. [Testing the LED Control Web Interface](#testing-the-led-control-web-interface)

## Requirements

- ESP32 development board
- USB cable (micro USB or USB-C, depending on the board)
- Arduino IDE (download from https://www.arduino.cc/en/software)
- Computer with a USB port and an internet connection

## Installing Drivers (maybe optional)

1. Download and install the CP210x USB to UART Bridge VCP drivers for your operating system from the Silicon Labs website:
   - Windows: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
   - Mac: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
   - Linux: Built-in kernel support, no need for additional drivers
2. Restart your computer after installing the drivers (maybe optional).

## Setting up Arduino IDE

1. Open the Arduino IDE.
2. Go to `File > Preferences`.
3. Add the following URL to the "Additional Boards Manager URLs" field: `https://dl.espressif.com/dl/package_esp32_index.json`
4. Click "OK" to save the changes.
5. Go to `Tools > Board > Boards Manager`.
6. Search for "esp32" and install the package by Espressif Systems.

## Creating the LED Control Sketch

1. Create a new sketch in the Arduino IDE.
2. Copy and paste the provided LED control sketch code into the new sketch.
3. Customize the `ssid` and `password` variables if desired.

## Uploading the Sketch

1. Connect the ESP32 development board to your computer using the USB cable.
2. In the Arduino IDE, select the correct ESP32 board from the `Tools > Board` menu.
3. Set the correct COM port from the `Tools > Port` menu.
4. Click the "Upload" button in the Arduino IDE to upload the sketch to the ESP32.

## Testing the LED Control Web Interface

1. After the upload is complete, a new WiFi access point with the name specified in the `ssid` variable should appear.
2. Connect to this access point using the password specified in the `password` variable.
3. Open a web browser and enter the IP address `192.168.4.1`.
4. The webpage should display two buttons for turning the built-in LED on and off.

Congratulations! You have successfully set up your ESP32 development board and created a basic LED control example using a WiFi access point and a web interface. Feel free to expand and modify the provided code for your own projects and applications.
