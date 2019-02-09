

void setup()
{
  for (int i = 2; i <= 5; i++)
  { pinMode(i, OUTPUT);
  }
  for (int i = 6; i <= 9; i++)
  { pinMode(i, INPUT);
  }
}
void p1()//****************for stop the both two motor
{
  for (int i = 2; i <= 5; i++)
  {
    digitalWrite(i, HIGH);
  }
}
void p2()//******************to move forward both the motors
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void p3()//******************to move backward both the motors
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void p4()//*****************to move one motor forward and another motor backward    means    to move motor right
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
void p5()//*****************to move one motor backward and another motor forward    means    to move motor left
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void loop()
{
  if (digitalRead(6) == HIGH)
  {
    p2();
    while(digitalRead(6) == HIGH);// ***************for solving the debounce problem , here the semicolons after the while condition work as     empty paranthesis 
    p1();
  }
  if (digitalRead(7) == HIGH)
  {
    p3();
    while(digitalRead(7) == HIGH);
    p1();
  }
  if (digitalRead(8) == HIGH)
  {
    p4();
    while(digitalRead(8) == HIGH);
    p1();

  }
  if (digitalRead(9) == HIGH)
  {
    p5();
    while(digitalRead(9) == HIGH);
    p1();

  }


}


