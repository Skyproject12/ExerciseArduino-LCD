#include <LiquidCrystal.h>

int button1=10;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2); 
  pinMode(button1, INPUT); 
  Serial.begin(9600); 
  lcd.print("Hello"); 
}

void loop() {  
  if(Serial.available()){
    lcd.clear(); 
    while(Serial.available()>0){ 
        lcd.write(Serial.read());
    }
  }
  if(digitalRead(button1)==LOW){ 
      for(int positionCounter=0; positionCounter<20; positionCounter++){ 
          lcd.scrollDisplayLeft(); 
          delay(150);
      } 
      for(int positionCounter=0; positionCounter<20; positionCounter++){ 
          lcd.scrollDisplayRight(); 
          delay(150);
      } 
  }
}
