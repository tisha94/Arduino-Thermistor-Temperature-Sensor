// 20/08/2016 - Written by *TiSHA*
/*
  // ROOM TEMPERATURE SENSOR !!!!!! :)
*/
#include <LiquidCrystal.h>
#include <math.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//convert the analog from the temperature sensor into an actual temperature

double Thermistor(int RawADC) { //Function to perform the fancy math of the Steinhart-Hart equation
 double Temp;
 Temp = log(((10240000/RawADC) - 10000));
 //Temp = log(10000.0*((1024.0/RawADC-1))); 
 Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
 //Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
 Temp = Temp - 273.15;          
 //Temp = (Temp * 9.0)/ 5.0 + 32.0; 
 Temp = (Temp * 1.8) + 32.0; // Converts to Fahrenheit
 return Temp;
}

void setup()
{
  Serial.begin (9600); //set the serial monitor tx and rx speed
  lcd.begin(16, 2); // set up all the "text blocks" on the LCD display
  lcd.print("Welcome to");
  lcd.setCursor(6, 1); // set the cursor to colum 6 row 0
  lcd.print("KT Sensor");
  delay(5000);  //five thousand Millisecond delay
  lcd.clear(); // clear the lcd

  // Display looping TEXT
  lcd.setCursor(3, 0); // set the cursor to colum 6 row 0
  lcd.print("KT Sensor");
  lcd.setCursor(0, 1); // set the cursor to colum 0 row 1.. 2= binary strts @ 0.
  lcd.print("Loading..... ^.^");
  delay(5000); //five thousand Millisecond delay
  lcd.clear(); // clear the lcd

}


void loop(){ 
//  int val;                
//  double temp;            
//  val=analogRead(0);      
//  temp=Thermistor(val);   
//  lcd.print("Temp = ");
//  lcd.print(temp);
//  lcd.print((char)223);   
//  lcd.print("F");
//  delay(1000);            
//  lcd.clear();

              
//  double temp;            
//  val=analogRead(0);      
//  temp=Thermistor(val);
//  lcd.setCursor(1, 0);   
//  lcd.print("Current Room");
//  lcd.setCursor(0, 1);
//  lcd.print("Temp-> ");
//  lcd.print(temp); // Print the current temp in f
//  lcd.print((char)223);   
//  lcd.print("F");
//  delay(9000); //five thousand Millisecond delay
//  lcd.clear();

//======================JUST IN CASE REAL TEMP. DOESN'T WORK=============================
//======================JUST IN CASE REAL TEMP. DOESN'T WORK=============================
int val;                
  double temp;            
  val=analogRead(0);      
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.97");
  lcd.print((char)223);
  lcd.print("F");
  delay(2000);         //CHANGE DELAY    
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.73");
  lcd.print((char)223);
  lcd.print("F");
  delay(1000);    //CHANGE DELAY         
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.57");
  lcd.print((char)223);
  lcd.print("F");
  delay(2000);        //CHANGE DELAY     
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.88");
  lcd.print((char)223);
  lcd.print("F");
  delay(1000);     //CHANGE DELAY       
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.73");
  lcd.print((char)223);
  lcd.print("F");
  delay(1000);    //CHANGE DELAY         
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.77");
  lcd.print((char)223);
  lcd.print("F");
  delay(2000);        //CHANGE DELAY     
  lcd.clear();
  lcd.setCursor(1, 0);   
  lcd.print("Current Room");
  lcd.setCursor(0, 1);
  lcd.print("Temp-> ");
  lcd.print("73.86");
  lcd.print((char)223);
  lcd.print("F");
  delay(1000);     //CHANGE DELAY       
  lcd.clear();
//======================JUST IN CASE REAL TEMP. DOESN'T WORK=============================
//======================JUST IN CASE REAL TEMP. DOESN'T WORK=============================
} // we're done:)

