#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Server"); // Device name
  Serial.println("The device started, waiting for a connection...");

  // Wait for a client to connect
  while (!SerialBT.hasClient()) {
    delay(100);
  }
  
  Serial.println("Client connected");
}

void loop() {
  // Check if there's incoming data
  if (Serial.available()) {
    char c = Serial.read();
    SerialBT.write(c); // Send data to the client
  }

  // Check if there's data from the client
  if (SerialBT.available()) {
    char c = SerialBT.read();
    Serial.write(c); // Print data received from the client
  }

  delay(20);
}
