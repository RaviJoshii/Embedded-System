#include <SoftwareSerial.h>   // this library function is used to create, the pin of microcontroller as serial port/UART 
SoftwareSerial BT(2,3);       // decline the 2nd and 3rd pin of microcontroller as UART the order is Rx,Tx
void setup()
{
  Serial.begin(9600);
  BT.begin(9600);
  for(int i=4;i<=7;i++)
  { 
    pinMode(i,OUTPUT);
  }

}
void p1()
{
  for(int i=4;i<=7;i++)
  {
    digitalWrite(i,HIGH);
  }
} 
void p2()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
void p3()
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
void p4()
{
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
}
void p5()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}
void loop()
{
  if(BT.available())
  {
    int y;
    y=BT.read();
    if(y=='a')
    {
      p2();

    }
    if(y=='A')
    {
      p3();

    }
    if(y=='b')
    {
      p4();

    }
    if(y=='B')
    {
      p5();

    }
    if(y=='c')
    {
      p1();

    }
    if(y=='C')
    {
      p1();

    }
  }

}
















