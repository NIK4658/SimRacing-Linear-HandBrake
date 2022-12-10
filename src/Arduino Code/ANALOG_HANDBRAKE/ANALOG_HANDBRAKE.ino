// Analog Handbrake for SimRacing
// PIN A0 to 10k pot output --> Throttle Axis
// Use with Arduino ProMicro.
// by Montanari Nicola
// 10.12.2022

#include <Joystick.h>

#define PIN A0

Joystick_ Joystick;

void setup(){
  pinMode(PIN, INPUT); 
  Joystick.begin();
}

void loop(){
  int pot = analogRead(PIN);
  int value = map(pot,0,1023,0,255);
  {
    Joystick.setThrottle(value);
  }
}