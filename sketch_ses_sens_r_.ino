#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int trigPin = 9;
const int echoPin=10;
int mesafe;
int zaman; 
int led=7;
void setup() {
  pinMode (led,OUTPUT);
pinMode (trigPin, OUTPUT);
pinMode ( echoPin,INPUT);
 lcd.begin(16,2);
 
 

}
void loop() {
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 delayMicroseconds(10);
 zaman= pulseIn (echoPin,HIGH);
 mesafe= (zaman/2)/28.5;
 
 lcd.clear();; 
 lcd.print (" mesafe = ");
lcd.setCursor(0,1);    // ikinci satır
 lcd.print (mesafe);
  lcd.print ("cm");
 delay(500);
 if (mesafe>100){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
 }
 else if(mesafe<=100 && mesafe>=50)
 {
 digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
 }
 else {
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
 }
}
