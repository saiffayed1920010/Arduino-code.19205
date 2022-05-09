#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


#define motorPin1 13
#define motorPin2 12
#define inputPin1 8
#define inputPin2 10
  
  void setup()
{ 
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(inputPin1, INPUT);
    pinMode(inputPin2, INPUT);


    lcd.begin();
    lcd.backlight();
  
}

  void loop()
{
      digitalWrite(motorPin1,HIGH);
      digitalWrite(motorPin2,LOW);
      lcd.print("Starting...");
      lcd.blink();
      delay(2000);
      lcd.clear();
      lcd.print("Progressing...");
      delay(10000);
      lcd.noDisplay();



    
    if(digitalRead(inputPin1)== HIGH)
    {
      digitalWrite(motorPin1,LOW);  
      lcd.clear();
      lcd.print("Error!");
      delay(2000);
      lcd.clear();
      lcd.print("Problem in");
      lcd.setCursor(0, 1);
      lcd.print("isolation ...");
      delay(3000);
      lcd.clear();
      lcd.print("Decrease");
      lcd.setCursor(0, 1);
      lcd.print("the speed ...");
      delay(3000);
      lcd.noDisplay();
     }   
  else {
        digitalWrite(motorPin1,HIGH);
        digitalWrite(motorPin2,LOW);
       }






    if(digitalRead(inputPin2)== LOW)
    {
      digitalWrite(motorPin1,LOW);  
      lcd.clear();
      lcd.print("Error!");
      delay(2000);
      lcd.clear();
      lcd.print("Problem in");
      lcd.setCursor(0, 1);
      lcd.print("copper wires...");
      delay(3000);
      lcd.clear();
      lcd.print("Increase the");
      lcd.setCursor(0, 1);
      lcd.print("copper wires ...");
      delay(3000);
      lcd.noDisplay();
     }
  else {
        digitalWrite(motorPin1,HIGH);
        digitalWrite(motorPin2,LOW);
       }

















}
