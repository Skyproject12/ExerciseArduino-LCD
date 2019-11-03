#include <LiquidCrystal.h>

int tombol1=10; 
int tombol2=9;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() { 
  lcd.begin(16,2); 
 
  pinMode(tombol1, INPUT); 
  pinMode(tombol2, INPUT);
}

void loop() {
  if(digitalRead(tombol1)==LOW){
     lcd.setCursor(0,0); 
     lcd.print("Tombol 1 ditekan");   
    for(int positionCounter=0; positionCounter<17; positionCounter++ ){
        lcd.scrollDisplayLeft();
        delay(150);
    } 
    for(int positionCounter=0; positionCounter<17; positionCounter++){ 
        lcd.scrollDisplayRight(); 
        delay(150); 
    }
    delay(1000);  
  } 
  else if(digitalRead(tombol2)==LOW){
    lcd.setCursor(0,0); 
    lcd.print("Tombol 2 ditekan");
    for(int positionCounter=0; positionCounter<35; positionCounter++){ 
        lcd.scrollDisplayRight();
        delay(150);
    } 
    for(int positionCounter=0; positionCounter<35; positionCounter++){ 
        lcd.scrollDisplayLeft();
        delay(150);      
    } 
    delay(1000);  
  }  
}
