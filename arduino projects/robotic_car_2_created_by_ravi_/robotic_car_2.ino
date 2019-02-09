

void setup()
{
  for (int i = 2; i <= 5; i++)
  { pinMode(i, OUTPUT);
  }
  for (int i = 6; i <= 9; i++)
  { pinMode(i, INPUT);
  }
}
void p1()
{
  for (int i = 2; i <= 5; i++)
  {
    digitalWrite(i, HIGH);
  }
}
void p2()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void p3()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void p4()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void p5()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void loop()
{
  while (digitalRead(6) == HIGH)
  {
    p2();
   
  } p1();
while (digitalRead(7) == HIGH)
  {
    p3();
  } p1();
while (digitalRead(8) == HIGH)
  {
    p4();
    
  }p1();
while (digitalRead(9) == HIGH)
  {
    p5();
   
  } p1();
                            

}
