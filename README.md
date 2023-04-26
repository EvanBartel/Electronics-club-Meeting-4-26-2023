# ESP32 LED Control Projects

This repository contains example projects to control the built-in LED on an ESP32 development board. The projects use different wireless communication methods, including Wi-Fi and Bluetooth.

## Table of Contents

1. [ESP32 Overview](#esp32-overview)
2. [Project 1: Wi-Fi LED Control](#project-1-wi-fi-led-control)
3. [Project 2: Bluetooth LED Control](#project-2-bluetooth-led-control)
4. [Project 3: Connecting Two ESP32s](#project-3-connecting-two-esp32s)
5. [Setting up the ESP32](#setting-up-the-esp32)
6. [Additional Resources](#additional-resources)

## ESP32 Overview

The ESP32 is a powerful microcontroller with integrated Wi-Fi and Bluetooth capabilities. It is ideal for various IoT and electronics projects. Some key features of the ESP32 include:

- Dual-core Tensilica LX6 microprocessor
- 240 MHz clock frequency
- 520 KB SRAM
- Integrated Wi-Fi and Bluetooth (Classic and BLE)

## Project 1: Wi-Fi LED Control

This project demonstrates how to control the built-in LED on an ESP32 development board using Wi-Fi. A web page is hosted on the ESP32, which allows the user to turn the LED on and off.

*Source code:* [WiFi_LED_Control.ino](./WiFi_LED_Control/)

## Project 2: Bluetooth LED Control

This project demonstrates how to control the built-in LED on an ESP32 development board using Bluetooth. A Bluetooth Serial connection is established with the ESP32, and the LED is controlled by sending "ON" or "OFF" commands.

*Source code:* [Bluetooth_LED_Control.ino](./Bluetooth_LED_Control/)

## Project 3: Connecting Two ESP32s

TBD

## Setting up the ESP32

### Installing the ESP32 Board in Arduino IDE

Follow these steps to install the ESP32 board in the Arduino IDE:

1. Open the Arduino IDE.
2. Go to `File` > `Preferences`.
3. In the "Additional Board Manager URLs" field, add the following URL: `https://dl.espressif.com/dl/package_esp32_index.json`
4. Click "OK" to save your changes.
5. Go to `Tools` > `Board` > `Boards Manager...`.
6. Search for "esp32" in the search bar.
7. Install the "esp32" board by Espressif Systems.
8. Once installed, you should see the ESP32 boards available in the `Tools` > `Board` menu.

### Installing Required Libraries

For the Wi-Fi LED Control project, you will need to install the following libraries:

1. ESPAsyncWebServer: [GitHub Repository](https://github.com/me-no-dev/ESPAsyncWebServer)
2. AsyncTCP: [GitHub Repository](https://github.com/me-no-dev/AsyncTCP)

For the Bluetooth LED Control project, no additional libraries are required as the BluetoothSerial library is already included with the ESP32 boards package.

## Additional Resources

- [ESP32 Official Website](https://www.espressif.com/en/products/socs/esp32)
- [ESP32 Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf)
- [ESP32 Official Documentation](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/index.html)
