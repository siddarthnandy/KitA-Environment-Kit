#include <LiquidCrystal_I2C.h>

int sensorPin = A0;
int soilMoisture = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
lcd.begin();
lcd.backlight();
pinMode(sensorPin, INPUT);
}

void loop() {
  lcd.clear()
  soilMoisture = analogRead(sensorPin);
  lcd.print("Soil Moisture: ");
  lcd.print(soilMoisture);
  lcd.println("%");
  delay(1000);
}
