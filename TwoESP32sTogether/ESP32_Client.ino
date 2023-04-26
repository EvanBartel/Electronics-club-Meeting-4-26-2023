#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  Serial.println("Trying to connect to ESP32_Server...");

  if (!SerialBT.connect("ESP32_Server")) { // Set the target server device name
    Serial.println("Couldn't find the target Bluetooth device!");
    return;
  }
  
  Serial.println("Connected to ESP32_Server!");
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
}
