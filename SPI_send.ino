#include<SPI.h>
int IR=8;
#define SS 53
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(IR,INPUT);
pinMode(SS,OUTPUT);
SPI.begin();
SPI.setClockDivider(SPI_CLOCK_DIV8);
digitalWrite(SS,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
int c=digitalRead(IR);
digitalWrite(SS,LOW);
SPI.transfer(c);
}
