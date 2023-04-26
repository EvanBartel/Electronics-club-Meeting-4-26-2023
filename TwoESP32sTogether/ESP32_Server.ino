#include <BLE_serial.h>

BLE_serial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32_Server"); // Set the server device name

  Serial.println("The device started, now you can pair it with bluetooth!");
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
}
