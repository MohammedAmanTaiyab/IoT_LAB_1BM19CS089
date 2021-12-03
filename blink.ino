int pin=13;
int d=1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin,HIGH);
  delay(d);
   digitalWrite(pin,LOW);
   delay(d);
}
