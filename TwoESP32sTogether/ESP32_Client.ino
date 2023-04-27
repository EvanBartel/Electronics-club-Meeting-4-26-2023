#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Client"); // Device name
  Serial.println("The device started, trying to connect...");

  // Attempt to connect to the server
  while (!SerialBT.connect("ESP32_Server")) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Connected to the server");
}

void loop() {
  // Check if there's incoming data
  if (Serial.available()) {
    char c = Serial.read();
    SerialBT.write(c); // Send data to the server
  }

  // Check if there's data from the server
  if (SerialBT.available()) {
    char c = SerialBT.read();
    Serial.write(c); // Print data received from the server
  }

  delay(20);
}
