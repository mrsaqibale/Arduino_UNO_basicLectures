int pin = A0;
int red = 7;
int green = 8;
int buz = 9;
int vol;
int flag = 1;
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(red , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(buz , OUTPUT);
  pinMode(pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  vol = analogRead(pin);
  Serial.println(vol);
  if( vol  > 300 ){
    digitalWrite(red , HIGH);
    digitalWrite(green , LOW);
    if (flag ==2 ){
      digitalWrite(buz, HIGH);
      delay(500);
      digitalWrite(buz, LOW);
      flag = 1;
    }
  }else{
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    if (flag == 1 ){
      digitalWrite(buz, HIGH);
      delay(500);
      digitalWrite(buz, LOW);
      flag = 2;
    }
  }
}
