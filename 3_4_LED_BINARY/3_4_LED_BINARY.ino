int p8= 8;
int p7= 7;
int p6= 6;
int p5 =5;

void setup() {
pinMode(p8, OUTPUT);
pinMode(p7, OUTPUT);
pinMode(p6, OUTPUT);
pinMode(p5, OUTPUT);

}

void loop() {
  

  
  digitalWrite( p8 , LOW);
  digitalWrite( p7 , LOW);
  digitalWrite( p6 , LOW);
  digitalWrite( p5 , LOW);
  delay(750);

  digitalWrite( p8 , LOW);
  digitalWrite( p7 , LOW);
  digitalWrite( p6 , LOW);
  digitalWrite( p5 , HIGH);
  delay(750);

    digitalWrite( p8 , LOW);
  digitalWrite( p7 , LOW);
  digitalWrite( p5 , HIGH);
  digitalWrite( p6 , LOW);
  delay(750);

    digitalWrite( p8 , LOW);
    digitalWrite( p7 , LOW);
    digitalWrite( p6 , HIGH);
    digitalWrite( p5 , HIGH);
  delay(750);

  digitalWrite( p8 , LOW);
  digitalWrite( p7 , LOW);
  digitalWrite( p6 , LOW);
  digitalWrite( p5 , HIGH);
  delay(750);




}
