int oPin = 7;
float dit = 120;
float daat = 350;
void setup() {
  pinMode(oPin,OUTPUT);

}

void loop() {

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);

  digitalWrite(oPin,HIGH);
  delay(daat);
  digitalWrite(oPin,LOW);
  delay(daat);

  digitalWrite(oPin,HIGH);
  delay(daat);
  digitalWrite(oPin,LOW);
  delay(daat);

  digitalWrite(oPin,HIGH);
  delay(daat);
  digitalWrite(oPin,LOW);
  delay(daat);

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);

  digitalWrite(oPin,HIGH);
  delay(dit);
  digitalWrite(oPin,LOW);
  delay(dit);



  delay(1000);
}
