int x = A0;
int y = A1;
int dpin = 8;
int xval ;
int yval;
int state;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(x , INPUT);
  pinMode(y , INPUT);
  pinMode(dpin, INPUT);
}

void loop() {
  xval = analogRead(x);
  yval = analogRead(y);
  state = digitalRead(dpin);
  Serial.print("X: ");
  Serial.print(xval);
  Serial.print("  Y:");
  Serial.print(yval);
  Serial.print("  Button:");
  Serial.print(state);
  Serial.println();
  delay(100);
}
