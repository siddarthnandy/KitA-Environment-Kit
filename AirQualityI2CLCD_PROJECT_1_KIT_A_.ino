#include <LiquidCrystal_I2C.h>
int sensor = A0;
int val;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
lcd.begin();
pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.clear();
lcd.backlight();
val = analogRead(sensor);
lcd.print(val);
lcd.print("PPM");
delay(1000);

}
