const int echoPin=2;
const int trigPin=3;
void setup(){
  Serial.begin(9600);
  
}

void loop() {
  long distance;
  int inches,cm;
}
  pinMode(trigPin,OUTPUT);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
   digitalWrite(echoPin,INPUT);
duration= pulseIn(echoPin,HIGH);
inches=microsecondsToInches(duration);
cm=microsecondsToCentimeters(duration);
Serial.print(inches);
Serial.print("\t");
Serial.print(inches);
Serial.println();
delay(1000);
}
long microsecondsToCentimeters(long microseconds)
{
  return microseconds/29/2;
}
long microsecondsToInches(long microseconds)
{
  return microseconds/74/2;
  
