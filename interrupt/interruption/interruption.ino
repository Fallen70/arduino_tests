//www.elegoo.com
//2016.12.9

#include <PinChangeInt.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

long interrupt = 0;
const byte pinILS1 = A1;
int khz;
int Hz;

void setup() {
    lcd.begin(16, 2);
    pinMode(pinILS1, INPUT); 
    PCintPort::attachInterrupt(pinILS1, compteur, FALLING);
}

void loop() {
  interrupt = 0;
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("Freq          Hz");

  
  if ( interrupt < 1000 ){
     lcd.setCursor(6, 0);
     lcd.print(interrupt);
  }
  
  else {
    khz = interrupt /1000;
    Hz = interrupt % 1000;
    
    lcd.setCursor(5, 0);
    lcd.print(khz);
    
    lcd.setCursor(8, 0);
    lcd.print(",");
    
    lcd.setCursor(9, 0);
    lcd.print(Hz);
    
    
    lcd.setCursor(13, 0);
    lcd.print("K");

  }
}

void compteur()
{
   interrupt++;
}
