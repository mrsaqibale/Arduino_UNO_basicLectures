int anapin = A1;
int pin = 7; 
int anaVol ;
float ledVal ;

void setup() {
  // put your setup code here, to run once:
   
  pinMode(pin , OUTPUT);
  pinMode(anapin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  anaVol = analogRead(anapin);
  ledVal = (255. / 1023. ) * anaVol;
  analogWrite(pin, ledVal);
  Serial.println(ledVal);
}
