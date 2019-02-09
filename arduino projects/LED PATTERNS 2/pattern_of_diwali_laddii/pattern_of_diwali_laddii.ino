void setup()
{
  for (int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);
  }
  for (int i = 8; i <= 10; i++)
  {
    pinMode(i, INPUT);
  }
}
//***********************************************
int value = 0;
void p1()
{
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, LOW);
  }
}
//*****************************************************
void p2()
{
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
}
//***********************************************************

void p3()
{
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, HIGH);
  }
  delay(1000);
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, LOW);
  }
  delay(1000);
}
//***************************************************
void loop()
{
  if (digitalRead(8) == HIGH)
  {

    delay(15);
    while (digitalRead(8) == HIGH) {}
    delay(15);
    value++;
  }
  if (value == 1)
  {
    while (1)
    {
      p1();
      if (digitalRead(8) == HIGH)
        break;
    }
  }
  if (value == 2)
  {
    while (1)
    {
      p2();
      if (digitalRead(8) == HIGH)
        break;
    }
  }
  if (value == 3)
  {
    while (1)
    {
      p3();
      if (digitalRead(8) == HIGH)
        break;
    }
  }

}

