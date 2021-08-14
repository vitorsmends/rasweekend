#include <LiquidCrystal.h>


int rs = 11, en = 10, d4 = 9, d5 = 8, d6 = 7, d7 = 6;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup(){
    lcd.begin();
}

void loop(){
    lcd.print("Hellow world!");
}
// Para apagar: 
lcd.clear();
