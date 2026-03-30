int blue =6; 
int green = 7; 
int red = 8; 

void setup() {
  // put your setup code here, to run once:

  pinMode(blue , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(red , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  // digitalWrite(blue, HIGH);
  // digitalWrite(red, LOW);
  delay(50);
  digitalWrite(green, LOW);
  digitalWrite(red, HIGH);
  delay(50);
  digitalWrite(red , LOW);
  digitalWrite(blue, HIGH);
  delay(50);
  digitalWrite(blue , LOW);
  digitalWrite(green, HIGH);
  delay(50);

}
