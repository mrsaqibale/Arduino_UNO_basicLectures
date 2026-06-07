#include <Stepper.h>
int stepsPerRevolution = 2048;
int speed = 20;
Stepper myStepper(stepsPerRevolution, 7,8,9,10);
int p7 = 7;
int p8 = 8;
int p9 = 9;
int p10 = 10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myStepper.setSpeed(speed);
}

void loop() {
  // put your main code here, to run repeatedly:
 myStepper.step(stepsPerRevolution);
 delay(1000);
 myStepper.step(-stepsPerRevolution);
 delay(1000);

}
