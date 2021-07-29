#include <Wire.h>
void setup() {
 Serial.begin (115200); // nastavit seriovy terminal na 115200 Bd
 while (!Serial) {}
 Serial.println ();
 Serial.println ("Hledam I2C .....");
 Wire.begin();
 for (byte i = 1; i < 120; i++)
 {
 Wire.beginTransmission (i);
 if (Wire.endTransmission () == 0)
 {
 Serial.print ("Nalezena adresa: ");
 Serial.print (i, DEC);
 Serial.print (" (0x");
 Serial.print (i, HEX);
 Serial.println (")");
 delay (1);
 }
 }
 Serial.println ("Hotovo");
 }

void loop() {}
