int blue =6; 
int green = 7; 
int red = 8; 

int v1 =0 ;
int v2 =0 ;
int v3 =0 ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(blue , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(red , OUTPUT);
}

void loop() {
 if ( v1 > 253 || v2 > 253 || v3 > 253){
  v1 = v2 = v3 = 0;
 }
 v1 = v1 + 8; 
 v2 = v2 + 8; 
 v3 = v3 + 8;
 Serial.println(v1);
 analogWrite(blue , v1);
 analogWrite(green, v2);
 analogWrite(red , v3);
 delay(1);

}
