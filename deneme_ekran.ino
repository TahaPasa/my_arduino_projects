#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{

  lcd.begin();


  lcd.backlight();
  lcd.clear();
  
  
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("FUCK THIS LIFE !");
  lcd.setCursor(0,1);
  lcd.print("ssshhhiiittt");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("");
  lcd.setCursor(0,1);
  lcd.print("ssshhhiiittt");
  delay(1000);
}
