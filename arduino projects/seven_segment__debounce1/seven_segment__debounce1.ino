void setup() {
  for (int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(8, INPUT);


}
int count = 0;
int data[10][8] =
{
  {1, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1, 0} ,
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 1, 0, 1, 1, 0}
};

void loop()
{

  

  if (digitalRead(8) == HIGH)
  {
    delay(15);
    while (digitalRead(8) == HIGH) {}
    delay(15);



    //*********************************************
    for (int i = 0; i < 8; i++)
    {
      digitalWrite(i, data[count][i]);
    }
    //********************************************

      count++;
      if(count==10)
      {
       count=0; 
        }
    }

  }




