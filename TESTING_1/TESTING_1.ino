#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int analogPin = A0; 
//int sensorData = analogRead(sensorPin);
int val = 0;
unsigned long time;
void setup() {

  lcd.begin(16,2);
  lcd.clear();
  lcd.write("Breath on sensor");

}
void loop() 
{
  delay(4000);
  val = readAlcohol();
  alcoholLevelMessage(val);
  printAlcohol(val);
     
}
void alcoholLevelMessage(int val)
{
  //scroll();
  lcd.setCursor(0,0);
   if (val < 350)
  {
     lcd.write("You are sober   ");
  }
  if (val > 350 && val < 400);
  {
     lcd.print("Stop soon       ");
  }
  if(val > 87);
   
  {
     lcd.print("DO NOT DRIVE ");
  }
}

 int readAlcohol()
 {
  int val = 0;
  lcd.clear();
  val = analogRead(analogPin); 
  delay(500);
  return val;
 }


void printAlcohol(int value)
{
  
  lcd.setCursor(0,1);
  lcd.print("Alcohol lvl: ");
  lcd.print(val);
} 
