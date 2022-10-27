#include<SoftwareSerial.h>
SoftwareSerial bt_iletisim (5,6);

#define sol_ileri 8
#define sol_geri 9
#define sol_hız 10
#define sag_ileri 12
#define sag_geri 13
#define sag_hız 11 
int v=255 ;
byte son_islem;


  void devam_et()
{
   if (son_islem=='1')
   {
     digitalWrite (sol_ileri,1); //ileri
  digitalWrite(sol_geri,0);
   analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
 analogWrite(11,v);
  }
  else if (son_islem=='2')
  {
  digitalWrite (sol_ileri,0);   //geri
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
 analogWrite(11,v);
  }
  else if (son_islem=='3')
  {
   digitalWrite (sol_ileri,1);  //sol
  digitalWrite(sol_geri,0);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
  analogWrite(11,v);
  }
 else if (son_islem=='4')
 {
     digitalWrite (sol_ileri,0); //sağ
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
  analogWrite(11,v);
  }
  else if (son_islem=='5')
  {
    digitalWrite (sol_ileri,0); //dur
  digitalWrite(sol_geri,0);
  analogWrite(10,0);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,0);
  analogWrite(11,0);
  }

 }

void setup() {

pinMode(sol_ileri ,OUTPUT);
pinMode(sag_ileri ,OUTPUT);
pinMode(sol_geri ,OUTPUT);
pinMode(sag_geri ,OUTPUT);
pinMode(10 ,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
bt_iletisim.begin(9600);
}

void loop() {
  byte a=0;
  byte b=25;
  byte c=50;
  byte d=75;
  byte e=100;
  byte f=125;
  byte g=150;
  byte h=175;
  byte i=200;
  byte j=225;
  byte k=250;
  
 
 if(bt_iletisim.available())
 {
  char data=bt_iletisim.read();
  Serial.println(data);
  
 if(data=='1')
  {  
  dur();
  delay(10);
  digitalWrite (sol_ileri,1);   //ileri
  digitalWrite(sol_geri,0);
   analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
 analogWrite(11,v);
   son_islem=1;
   
   }
  
    else if (data=='2')
    {
     dur();
    delay(10);
  digitalWrite (sol_ileri,0); //geri
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
 analogWrite(11,v);
    son_islem=2;
   }
  
  
   else if (data=='3'){
    dur();
    delay(10);                    //sol
   digitalWrite (sol_ileri,1);
  digitalWrite(sol_geri,0);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
  analogWrite(11,v);
    son_islem=3;
     
   }
    else if (data=='4')
    {
    dur();    
  
    delay(10);
  digitalWrite (sol_ileri,0);  //sağ
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
  analogWrite(11,v);
     son_islem=4;
    
    }
   else if (data=='5')
   {
  dur();
  son_islem=5;
   } 
  else if (data=='6')
   { 
  for(int v=0; v>=0&&v<=25;v+25) ;
 
  analogWrite(10,v);
  analogWrite(11,v);
  Serial.println('v');
  Serial.print(v);
  devam_et();
   }
   else if (data=='7')
   { 
   
   for(int v=255; v>=230&&v<=255;v-25) ;
   
 
  analogWrite(10,v);
  analogWrite(11,v);
  Serial.println('v');
  Serial.print(v);
  devam_et();
   }
 
    
}
}
   

 
void ileri() {
  digitalWrite (sol_ileri,1);
  digitalWrite(sol_geri,0);
   analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
 analogWrite(11,v);
  }
    void dur() {    
  
 digitalWrite (sol_ileri,0);
  digitalWrite(sol_geri,0);
  analogWrite(10,0);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,0);
  analogWrite(11,0);
    }
    void geri() { 
  digitalWrite (sol_ileri,0);
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
 analogWrite(11,v);
 }
  void sol(){
  digitalWrite (sol_ileri,1);
  digitalWrite(sol_geri,0);
  analogWrite(10,v);
  digitalWrite(sag_ileri,0);
  digitalWrite(sag_geri,1);
  analogWrite(11,v);
  }
  void sag() {
  digitalWrite (sol_ileri,0);
  digitalWrite(sol_geri,1);
  analogWrite(10,v);
  digitalWrite(sag_ileri,1);
  digitalWrite(sag_geri,0);
  analogWrite(11,v);
  }  
  
 

 
 



   
  
    
 
 
  
  
  
