#include <Wire.h>
#include "RTClib.h"

#define LED_PIN 2  // PB2 → Digital pin 2 in ATtinyCore
#define ON_HOUR 18 // 6pm
#define OFF_HOUR 23 // 11pm

RTC_DS3231 rtc;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Wire.begin(); // for ATtiny85 to use default pins PB0/SDA and PB1/SCL
  rtc.begin(); // start the code

  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
}

void loop() {
  DateTime now = rtc.now(); // temp now to hold the current time

  if (now.hour() >= ON_HOUR && now.hour() < OFF_HOUR) { // check now time with change time
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  // sleep for power save
  delay(5000); // wake up every 5 seconds (for testing)
}
