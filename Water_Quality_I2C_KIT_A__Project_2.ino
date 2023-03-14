#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  // put your setup code here, to run once:
lcd.begin();
lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
int sensorValue = analogRead(A1);
float tdsValue = (float)sensorValue * 5 / 1024;
tdsValue = tdsValue * 1000;
tdsValue = tdsValue / 10;
lcd.print(tdsValue);
lcd.print(" ppm");
delay(1000);
}
