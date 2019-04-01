int buzzer=9;
int receive=8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzer,OUTPUT);
pinMode(receive,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int d=digitalRead(receive);
Serial.println(d);
if(d==0)
digitalWrite(buzzer,HIGH);
else
digitalWrite(buzzer,LOW);
}
