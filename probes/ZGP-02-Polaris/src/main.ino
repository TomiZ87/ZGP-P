/*
  ZGP-02 Source Code
  by Tomas & Tibor Zajic (2021)
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2      // Pin Used - for mapping
#define DHTTYPE DHT11 // DHT 11 (AM2301)

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Start and setup the LCD
  lcd.init(); 
  lcd.backlight(); 

  // Start of Serial Monitor
  Serial.begin(9600);
  delay(500);

  // Wait before accessing Sensor
  Serial.println("Waiting for DHT11\n\n");
  delay(1000);

  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Print a message to the LCD - First row
  lcd.print("ZGP-02");
}

void loop() {
  // Reading Temperature and humidity from DHT11 Sensor
  int t, h;
  t = dht.readTemperature();
  h = dht.readHumidity();
  
  // Prints time since powering up on the first row after "ZGP-02"
  lcd.setCursor(7, 0);
  lcd.print(" >");
  lcd.print(millis()/1000);
    
  // Second row printing (temperature data)
  lcd.setCursor(0, 1);
  lcd.print("t:");
  lcd.print(t);
  lcd.print("");
  lcd.print((char)223);
  lcd.print("C ");

  // Second row printing (humidity data)
  lcd.setCursor(9, 1);
  lcd.print("h:");
  lcd.print(h);
  lcd.print(" %");
}
