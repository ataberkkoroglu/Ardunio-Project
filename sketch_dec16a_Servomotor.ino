#include<Servo.h>

Servo sg90 ;
const byte pot_pin=A0;
int pot_degeri;
int Aci_degeri;



  void setup() {
 
 Serial.begin(9600);
 sg90.attach(5);
  }
  
void loop() {

pot_degeri=analogRead (pot_pin);
 int yeni_deger=map (pot_degeri,0,1023,0,180);
sg90.write(yeni_deger);
Serial.print("Aci_degeri=");
Serial.println (yeni_deger);
delay(15);
}
