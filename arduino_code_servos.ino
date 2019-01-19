#include "Servo.h"
Servo ser1;
Servo ser2;
Servo ser3;
Servo ser4;
Servo ser5;
char input;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ser1.attach(2);
  ser2.attach(3);
  ser3.attach(4);
  ser4.attach(5);
  ser5.attach(6);
  
}
 
void loop() {

 if(Serial.available()>0)
  input = Serial.read();
  if(input == 'A')
  
  {
  for(int i=0; i<180 ; i++)
  {
    ser1.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser2.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser3.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser4.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser5.write(i);
  }
  delay(2000);
  for(int i=180;i>0;i--)
  {
    ser1.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser2.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser3.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser4.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser5.write(i);
  }
  
  }
  if(input == 'B')
  {
   for(int i=0; i<180 ; i++)
  {
    ser1.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser2.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser3.write(i);
  }
   
   for(int i=0; i<180 ; i++)
  {
    ser5.write(i);
  }
  delay(2000);
  for(int i=180;i>0;i--)
  {
    ser1.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser2.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser3.write(i);
  }
  
  for(int i=180;i>0;i--)
  {
    ser5.write(i);
  }
  }

if(input == 'C')
  
  {
  for(int i=0; i<180 ; i++)
  {
    ser1.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser2.write(i);
  }
   
   for(int i=0; i<180 ; i++)
  {
    ser5.write(i);
  }
  delay(2000);
  for(int i=180;i>0;i--)
  {
    ser1.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser2.write(i);
  }
  
  for(int i=180;i>0;i--)
  {
    ser5.write(i);
  }  
  }
  if(input == 'D')
  
  {
  for(int i=0; i<180 ; i++)
  {
    ser1.write(i);
  }
   
   for(int i=0; i<180 ; i++)
  {
    ser5.write(i);
  }
  delay(2000);
  for(int i=180;i>0;i--)
  {
    ser1.write(i);
  }
  
  for(int i=180;i>0;i--)
  {
    ser5.write(i);
  }
  }
  if(input == 'E')
  
  {
  
   for(int i=0; i<180 ; i++)
  {
    ser5.write(i);
  }
  delay(2000);
  
  for(int i=180;i>0;i--)
  {
    ser5.write(i);
  }
  
  }
  if(input == 'F')
  
  {
  
   for(int i=0; i<180 ; i++)
  {
    ser2.write(i);
  }
   for(int i=0; i<180 ; i++)
  {
    ser3.write(i);  
  }
   
  delay(2000);
  
  for(int i=180;i>0;i--)
  {
    ser2.write(i);
  }
  for(int i=180;i>0;i--)
  {
    ser3.write(i);
  }
  
  
  }
  }
  

  


