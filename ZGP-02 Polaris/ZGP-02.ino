#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#define DHTPIN 2    // modify to the pin we connected
#define DHTTYPE DHT11   // DHT 11 (AM2301)

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init(); 
  lcd.backlight(); 

  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor

  // set up the LCD's number of columns and rows:
  lcd.begin(20, 2);
  // Print a message to the LCD.
  lcd.print("ZGP-02");
}
void loop() 
{
  int t, h;
  
  lcd.setCursor(1,0); 
  t = dht.readTemperature();
  h = dht.readHumidity();

  lcd.setCursor(7, 0);
  lcd.print(" >");
  lcd.print(millis()/1000);
    
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:

  lcd.print("t:");
  lcd.print(t);
  lcd.print("");
  lcd.print((char)223);
  lcd.print("C ");

    lcd.setCursor(9, 1);
  // print the number of seconds since reset:

  lcd.print("h:");
  lcd.print(h);
  lcd.print(" %");
}
