int pin8 = 8;
int currentZ = 0;
int currentLow = 64;
int currentMid = 128;
int currentH = 256;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(pin8, currentZ);
  delay(1000);
  analogWrite(pin8, currentLow);
  delay(1000);
  analogWrite(pin8, currentMid);
  delay(1000);
  analogWrite(pin8, currentH);
  delay(1000);
  
}
