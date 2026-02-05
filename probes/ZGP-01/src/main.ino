/*
  ZGP-01 Source Code
  by Tomas & Tibor Zajic (2020)
*/

#include <Wire.h>
#include <SFE_BMP180.h>
#include <LiquidCrystal.h>
SFE_BMP180 bmp180;

int Altitude = 5; // Current altitude in meters
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; //Mapping pins
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Start of Serial Monitor
  Serial.begin(9600);
  bool success = bmp180.begin();

  if (success) {
    Serial.println("BMP180 init success");
  }

  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Print a message to the LCD.- First row
  lcd.print("ZGP-01");
}

void loop() {
  char status;
  double T, P; // temperature and pressure (pressure is unused while printing)
  bool success = false;

  status = bmp180.startTemperature();

  // Getting temperature and checks
  if (status != 0) {
    delay(1000);
    status = bmp180.getTemperature(T);

    if (status != 0) {
      status = bmp180.startPressure(3);

      if (status != 0) {
        delay(status);
        status = bmp180.getPressure(P, T);

        if (status != 0) {
          float comp = bmp180.sealevel(P, Altitude);
          
          // Prints the temperature into the Serial monitor - for testing
          Serial.print("Temperature: ");
          Serial.print(T);
          Serial.println(" C");
        }
      }
    }
  }

  // Prints time since powering up on the first row after "ZGP-01"
  lcd.setCursor(8, 0);
  lcd.print(" >");
  lcd.print(millis() / 1000);
    
  // Second row printing (temperature)
  lcd.setCursor(0, 1);
  lcd.print("T = ");
  lcd.print(T);
  lcd.print("");
  lcd.print((char)223);
  lcd.print("C");
}
