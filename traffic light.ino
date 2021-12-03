int ypin=13;
int rpin=8;
int gpin=3;
int d=300;
void setup() {
  // put your setup code here, to run once:
 pinMode(rpin,OUTPUT);
 pinMode(ypin,OUTPUT);
 pinMode(gpin,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rpin,HIGH);
  digitalWrite(ypin,LOW);
  digitalWrite(gpin,LOW);
  delay(d);
  digitalWrite(rpin,LOW);
  digitalWrite(ypin,HIGH);
  digitalWrite(gpin,LOW);
  delay(d);
  digitalWrite(rpin,LOW);
  digitalWrite(ypin,LOW);
  digitalWrite(gpin,HIGH);
  delay(d);
  
}
