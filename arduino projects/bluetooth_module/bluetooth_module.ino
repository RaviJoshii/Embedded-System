#include <SoftwareSerial.h>
SoftwareSerial BT(2,3);
void setup()
{
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop()
{
  if(BT.available())
  {
    int y;
    y=BT.read();
    if(y=='a')
    {
      digitalWrite(4,HIGH);
      Serial.write(y);
    }
    if(y=='A')
    {
      digitalWrite(4,LOW);
       Serial.write(y);
    }
    if(y=='b')
    {
      digitalWrite(5,HIGH);
       Serial.write(y);
    }
    if(y=='B')
    {
      digitalWrite(5,LOW);
       Serial.write(y);
    }
  }
}

