#include <SPI.h>
char buf[150];
volatile byte pos;
volatile boolean recibido;
int state=0;
int datox=0;
void setup() {
  Serial.begin(9600);
  pinMode(50,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,INPUT);
  SPCR |= _BV(SPE);
  pos = 0;
  recibido = false;
  SPI.attachInterrupt();
}
  ISR( SPI_STC_vect)
  {
    esstado=SPDR;
      Serial.println(estado);
      recibido=true;
      SPDR=datox;
  }

void loop(void) {
int state=digitalRead(9)
if(state==HIGH)
{
  datox=0;
}
if(state==LOW)
{
  datox=0;
}

  if(recibido)
  {
    digitalWrite(10,state);
  }
}
