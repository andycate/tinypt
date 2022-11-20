#include <HIDSerial.h>
#include <Arduino.h>

HIDSerial serial;
unsigned long t = 0;

void setup() {
  // put your setup code here, to run once:
  serial.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (millis() > t + 2000)
    {
        t = millis();
        serial.write('A');  
        serial.print(0);
        serial.print(" = ");
        serial.println(analogRead(0));
    }
  serial.poll();
}