#include <LiquidCrystal.h>


LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
 pinMode(A0,INPUT);
 lcd.begin(16,2);
}

void loop() {
  float Vm,x;
  float a=.0152;
  float b=.5432;
  float c=3.9297;
  delay(500);
  Vm=analogRead(A0);
  Vm=Vm*(5.0/1023.0);
  lcd.setCursor(0,0);
  lcd.print("Voltaje:");
  lcd.setCursor(10,0);
  lcd.print(Vm);
  lcd.print("V");
  
  c=c-Vm;
  x = (b - sqrt( (b*b) - (4 * a * c) ) ) / (2.0 * a);
   lcd.setCursor(0,1);
   lcd.print("Dist:");
   lcd.setCursor(9,1);
   lcd.print(x);
   lcd.print("mm");
    
 }
