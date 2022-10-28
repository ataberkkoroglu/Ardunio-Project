const int pot_pin= A0; ;
int gelen_veri;
  void setup() {
 Serial.begin(9600);
  }
  
void loop() {
gelen_veri = analogRead(pot_pin);
Serial.print(gelen_veri);
delay(250);



}
