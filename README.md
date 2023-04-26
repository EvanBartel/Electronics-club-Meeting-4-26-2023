# ESP32 LED Control Projects

This repository contains example projects to control the built-in LED on an ESP32 development board using Wi-Fi and Bluetooth.

## Table of Contents

1. [ESP32 Overview](#esp32-overview)
2. [Installing Drivers](#installing-drivers)
3. [Setting up the ESP32](#setting-up-the-esp32)
4. [Project 1: Wi-Fi LED Control](#project-1-wi-fi-led-control)
5. [Uploading the Sketch](#uploading-the-sketch)
6. [Project 2: Bluetooth LED Control](#project-2-bluetooth-led-control)
7. [Project 3: Two ESP32s' Paired together](#Two-ESP32s-Paired-together)

## ESP32 Overview

The ESP32 is a powerful microcontroller with integrated Wi-Fi and Bluetooth capabilities. It is ideal for various IoT and electronics projects. Some key features of the ESP32 include:

- Dual-core Tensilica LX6 microprocessor
- 240 MHz clock frequency
- 520 KB SRAM
- Integrated Wi-Fi and Bluetooth (Classic and BLE)

## Installing Drivers

1. Download and install the CP210x USB to UART Bridge VCP drivers for your operating system from the Silicon Labs website:
   - Windows: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
   - Mac: https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers
   - Linux: Built-in kernel support, no need for additional drivers
   - ChromeBook ¯\\_ (ツ)_/¯. it is based op linux so maybe nothing is needed
2. Restart your computer after installing the drivers.


## Setting up the ESP32

Follow the steps below to set up your ESP32 development board:

1. Install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).
2. Open the Arduino IDE and go to `File` > `Preferences`.
3. In the "Additional Boards Manager URLs" field, add the following URL:
   `https://dl.espressif.com/dl/package_esp32_index.json`
4. Click "OK" to save your changes.
5. Go to `Tools` > `Board` > `Boards Manager`.
6. Search for "esp32" and install the package by Espressif Systems.
7. Hit `install`

## Project 1: Wi-Fi LED Control

This project demonstrates how to control the built-in LED on an ESP32 development board using Wi-Fi. A web page is hosted on the ESP32, which allows the user to turn the LED on and off.

*Source code:* [WiFi_LED_Control.ino](./WiFi_LED_Control/)

### Steps

2. Open the `WiFi_LED_Control.ino` sketch in the Arduino IDE.
3. Modify the `ssid` and `password` variables with your Wi-Fi network credentials.
4. Upload the sketch to your ESP32 board.
5. After the upload is complete, a new WiFi access point with the name specified in the `ssid` variable should appear.
6. Connect to this access point using the password specified in the `password` variable.
7. Open a web browser and enter the IP address `192.168.4.1`.
8. The webpage should display two buttons for turning the built-in LED on and off.

## Project 2: Bluetooth LED Control

This project demonstrates how to control the built-in LED on an ESP32 development board using Bluetooth. A Bluetooth Serial connection is established with the ESP32, and the LED is controlled by sending "ON" or "OFF" commands.

*Source code:* [Bluetooth_LED_Control.ino](./Bluetooth_LED_Control/)

### Steps

1. Open the `Bluetooth_LED_Control.ino` sketch in the Arduino IDE.
2. Upload the sketch to your ESP32 board.
3. Use a Bluetooth Serial Terminal app on your smartphone or computer to scan for available Bluetooth devices.
4. Connect to the "ESP32_LED_Control" device.
5. Send the "ON" command to turn the LED on, and the "OFF" command to turn the LED off.

# ESP32 LED Control

This README file will guide you through the process of setting up your ESP32 development board, and how to use the Wi-Fi and Bluetooth projects provided to control the built-in LED on your ESP32.

## Features

1. Wi-Fi LED Control Project: Turn the built-in LED on and off using a web interface served by the ESP32.
2. Bluetooth LED Control Project: Control the built-in LED through a Bluetooth serial monitor.

## Uploading the Sketch

1. Connect the ESP32 development board to your computer using the USB cable.
2. In the Arduino IDE, select the correct ESP32 board from the `Tools > Board` menu.
3. Set the correct COM port from the `Tools > Port` menu.
4. Click the "Upload" button in the Arduino IDE to upload the sketch to the ESP32.

## Wi-Fi LED Control Project


### Uploading the Wi-Fi LED Control Sketch

1. Open the Wi-Fi LED Control sketch in the Arduino IDE.
2. Make sure to update the `ssid` and `password` variables with your Wi-Fi network credentials.
3. Connect your ESP32 board to your computer via USB.
4. Select the correct board and port under the `Tools` menu.
5. Click the "Upload" button to upload the sketch to your ESP32.
6. Once the sketch is uploaded, open the Serial Monitor (`Tools` > `Serial Monitor`) and note the IP address displayed.
7. Open a web browser and navigate to the displayed IP address to control the built-in LED using the web interface.

## Bluetooth LED Control Project

### Uploading the Bluetooth LED Control Sketch

1. Open the Bluetooth LED Control sketch in the Arduino IDE.
2. Connect your ESP32 board to your computer via USB.
3. Select the correct board and port under the `Tools` menu.
4. Click the "Upload" button to upload the sketch to your ESP32.

### Using the Bluetooth LED Control Project

1. Pair your computer or smartphone with the ESP32 board. The device name will be "ESP32_LED_Control" (or whatever you set it to).
2. Use a Bluetooth serial monitor app or software to connect to the ESP32. (either from your phone or laptop)
3. Send the following commands to control the built-in LED:
   - `ON`: Turn the LED on.
   - `OFF`: Turn the LED off.

With these setup instructions and steps for both the Wi-Fi and Bluetooth LED control projects, you should be able to successfully control the built-in LED on your ESP32 development board using Wi-Fi and Bluetooth.


## Two ESP32s Paired together

1. Upload the "server" code `ESP32_Server.ino` to one of the ESP32s.
2. Upload the "client" code `ESP32_Client.ino` to the other ESP32.
3. When they are noth powered on they will attempt to communicate with the other.
4. Once Once connected, you can send data between the devices using the Serial Monitor in the Arduino IDE. Data sent from the server will be received by the client and vice versa.

