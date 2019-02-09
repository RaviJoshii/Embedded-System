#include<LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 0, 1, 2, 3, 4, 5, 6, 7);

void setup()
{
  lcd.begin(16, 2);
  lcd.print("Mode of operation");
  lcd.setCursor(0, 1);
  lcd.print("1:LM 2:MM 3:HM");   // here LM refers the light mode,MM refers the meduim mode,HM refers the heavy mode 
          }
            void LM()            // LM(light mode) is the function in which we do washing,soaking,rinsing,spinning for two second delay in each operation 
            {
            lcd.setCursor(3,0);
            lcd.print("WASHING");
            delay(2000);
            lcd.clear();          // lcd.clear is the command which is used to clear the screen of lcd 
            lcd.setCursor(3,0);
            lcd.print("SOAKING");
            delay(2000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("RINSING");
            delay(2000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("SPINNING");
            delay(2000);
            lcd.clear();
          }
            void MM()               // MM(meduim mode) is the function in which we do washing,soaking,rinsing,spinning for three second delay in each operation 
            {
            lcd.setCursor(3,0);
            lcd.print("WASHING");
            delay(3000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("SOAKING");
            delay(3000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("RINSING");
            delay(3000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("SPINNING");
            delay(3000);
            lcd.clear();
          }
            void HM()                // HM(heavy mode) is the function in which we do washing,soaking,rinsing,spinning for five second delay in each operation 
            {
            lcd.setCursor(3,0);
            lcd.print("WASHING");
            delay(5000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("SOAKING");
            delay(5000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("RINSING");
            delay(5000);
            lcd.clear();
            lcd.setCursor(3,0);
            lcd.print("SPINNING");
            delay(5000);
            lcd.clear();
          }
            void loop() {
            if (digitalRead(10)==HIGH)            // by pressing the switch(which is connected to 10th pin) we operate the washing machine at light mode ,by calling LM
            {
            delay(15);
            while(digitalRead(10)==HIGH);
            delay(15);
            LM();
            lcd.clear();
            lcd.print("Mode of operation");
            lcd.setCursor(0,1);
            lcd.print("1: LM 2: MM 3: HM");
}
if (digitalRead(11) == HIGH)                 // by pressing the switch(which is connected to 11th pin) we operate the washing machine at meduim mode ,by calling MM
{
  delay(15);
  while (digitalRead(11) == HIGH);
  delay(15);
  LM();
  lcd.clear();
  lcd.print("Mode of operation");
  lcd.setCursor(0, 1);
  lcd.print("1:LM 2:MM 3:HM");
          }
            if (digitalRead(12)==HIGH)      // by pressing the switch(which is connected to 12th pin) we operate the washing machine at heavy mode ,by calling HM
          {
            delay(15);
            while(digitalRead(12)==HIGH);
            delay(15);
            LM();
            lcd.clear();
            lcd.print("Mode of operation");
            lcd.setCursor(0,1);
            lcd.print("1: LM 2: MM 3: HM");
}



}
