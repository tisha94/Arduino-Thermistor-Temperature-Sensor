// 20/08/2016 - Written by *TiSHA*
/*
  // Start Display :)
*/

#include <LiquidCrystal.h>

int tempPin = A0;


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
  Serial.begin (9600);
  lcd.begin(16, 2); // set up all the "text blocks" on the display

}

void loop(){
  
  lcd.print("#CodeStart  &");
  lcd.setCursor(4, 1);
  delay(1000);  //one thousand Millisecond delay
  lcd.print("KT Sensor");
  delay(2000);  //one thousand Millisecond delay
  lcd.clear();

  lcd.setCursor(5, 1);
  lcd.print("Demo Day!");
  delay(1000); 
  lcd.clear();


//  lcd.setCursor(4, 0);
//  lcd.print("KT Sensor");
//  lcd.setCursor(4, 1);
//  lcd.print("Demo Day!");
//  delay(1500);  //one thousand Millisecond delay
//  lcd.clear();

//  lcd.setCursor(4, 1);
//  lcd.print("Demo Day!");
//  delay(1000); 
}
