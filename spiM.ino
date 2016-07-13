#include <SPI.h>

int state=0;
int regre=0;
void setup() {
  Serial.begin(9600);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  digitalWrite(SS,HIGH);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV16);
}

void loop(void) {
char c;
delay(1);
if (regre==0)
{
  digitalWrite(10,LOW);
}
else
{
    digitalWrite(10,HIGH);
}
  digitalWrite(SS,LOW);
  state =   digitalRead(9);
  if(state == HIGH)
  {
    regre=SPI.transfer(HIGH);
    digitalWrite(SS,HIGH);
    delay(1000);
  }
    if(state == LOW)
  {
    regre=SPI.transfer(LOW);
    digitalWrite(SS,LOW);
    delay(1000);
  }
}
