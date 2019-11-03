#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // print lcd 
  lcd.begin(16,2); 
  // print hello world 
  lcd.print("hello, world");
}

void loop() {
  lcd.setCursor(0,1);
  // print waktu eksekusi /1000
  lcd.print(millis()/1000);
}
