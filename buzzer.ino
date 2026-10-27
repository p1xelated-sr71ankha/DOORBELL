// C++ code
//
const int buzzerpin = 8;
const int pushpin = 7;

void setup()
{
  pinMode(buzzerpin,OUTPUT);
  pinMode(pushpin,INPUT_PULLUP);
  
}

void loop()
{
 if(digitalRead(pushpin)==LOW)
 {
   digitalWrite(buzzerpin,HIGH);
   delay(340);
   digitalWrite(buzzerpin,LOW);
   delay(590);
}
}