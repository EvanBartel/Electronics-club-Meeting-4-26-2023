#include "BluetoothSerial.h"

BluetoothSerial SerialBT;
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);

  SerialBT.begin("ESP32_LED_Control");
  Serial.println("Bluetooth device is ready to pair.");
}

void loop() {
  if (SerialBT.available()) {
    String message = SerialBT.readString();
    message.trim();
    
    if (message == "ON") {
      digitalWrite(LED_PIN, HIGH);
      SerialBT.println("LED turned on");
    } else if (message == "OFF") {
      digitalWrite(LED_PIN, LOW);
      SerialBT.println("LED turned off");
    } else {
      SerialBT.println("Invalid command. Send 'ON' or 'OFF' to control the LED.");
    }
  }

  delay(20);
}
