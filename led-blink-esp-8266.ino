#include <Arduino.h>

#define LED_PIN 2
#define SERIAL_BAUDRATE 115200

void setup() {
  Serial.begin(SERIAL_BAUDRATE);
  Serial.println("Led state");

  pinMode(LED_PIN,OUTPUT);
  digitalWrite(LED_PIN,LOW);
}

void loop() {
  digitalWrite(LED_PIN,LOW);
  Serial.println("Led OFF");
  delay(1000);
  digitalWrite(LED_PIN,HIGH);
  Serial.println("Led ON");
  delay(1000);  
}
