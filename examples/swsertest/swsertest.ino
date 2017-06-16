/*

Example for ESP8266, tested against Wemis D1 mini

*/

#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial swSer(D5, D6, false, 256);

void setup() {
  Serial.begin(4800);
  swSer.begin(4800);
  swSer.setParity(PARITY_MODE_EVEN);
  swSer.setStopBits(STOP_BITS_TWO);

  Serial.println("\nSoftware serial test started");

  for (char ch = ' '; ch <= 'z'; ch++) {
    swSer.write(ch);
  }
  swSer.println("");

}

void loop() {
  while (swSer.available() > 0) {
    Serial.write(swSer.read());
  }
  while (Serial.available() > 0) {
    swSer.write(Serial.read());
  }

}
