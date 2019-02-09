void setup()
{
  for (int i = 2; i < 6; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void f1()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

}
void f2()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}
void f3()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}
void f4()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

}
void loop()
{
  f1();
  delay(30);
  f2();
 delay(30);
 f3();
 delay(30);
  f4();

 delay(30);
}
