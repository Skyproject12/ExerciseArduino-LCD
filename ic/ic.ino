#include <LiquidCrystal.h> 
int tombol1=10; 
int tombol2=9;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2); 
  lcd.print("hello, world"); 
  pinMode(tombol1, INPUT); 
  pinMode(tombol2, INPUT);
}

void loop() {
  // index dari text akan di buat 
  lcd.setCursor(0,0); 
  if(digitalRead(tombol1)== LOW){ 
      lcd.print("Tombol 1 diklik");  
  } 
  else if(digitalRead(tombol2)==LOW){
      lcd.print("Tombol 2 diklik");  
  }
}
