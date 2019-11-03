#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2); 
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){ 
    delay(100); 
    // menghapus cd secara defauld 
    lcd.clear(); 
    while(Serial.available()>0){ 
      // memasukkan inputan dari serial ke dalam cd 
        lcd.write(Serial.read());
    }  
  }
}
