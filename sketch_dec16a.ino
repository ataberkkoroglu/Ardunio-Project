int led=4 ;
int but=5 ; 
int butondurumu;
void setup() {
  pinMode ( 4, OUTPUT);
  pinMode (5, INPUT) ;
 
 }

void loop() {
  // put your main code here, to run repeatedly:

butondurumu ; digitalRead (5);
if ( butondurumu== HIGH)
digitalWrite (led, HIGH) ;
else
digitalWrite (led, LOW);
}
