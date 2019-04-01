#include<SPI.h> 
int transmit=8;
#define SS 53
int d;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(transmit,OUTPUT);
pinMode(50,OUTPUT);
SPCR |= _BV(SPE);
SPI.attachInterrupt();
}
ISR (SPI_STC_vect)
{
  d = SPDR;                  
  int received = true;                       
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(d);
  digitalWrite(transmit,d);
}
