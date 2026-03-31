#include <Servo.h>
Servo moter;
int pin = 7;
int pos = 90;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  moter.attach(pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  moter.write(pos);
}
