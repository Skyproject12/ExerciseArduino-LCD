#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup() { 
  lcd.begin(16,2); 
  lcd.print("hello, world skylight"); 
  delay(1000);  
}

void loop() {
  for(int positionCounter=0; positionCounter<22; positionCounter++){ 
    // lcd.clear menghapus data dari lcd
    lcd.scrollDisplayLeft();  
    // size adalah jumlah karakter dari string yang di print 
    lcd.setCursor(0,1);
    lcd.print(positionCounter); 
    delay(150);  
  } 
  // position counter jumlah karakter yang di print ditambah 16 
  for(int positionCounter=0; positionCounter<38; positionCounter++){ 
    lcd.scrollDisplayRight(); 
    delay(150);  
  }  
  // position counter left defauld 16 untuk mengurangi position counter sebelumnya
  for(int positionCounter=0; positionCounter<16; positionCounter++){ 
    lcd.scrollDisplayLeft(); 
    delay(150);  
  } 
  delay(1000);
}
