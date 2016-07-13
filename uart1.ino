int in=0:
int estadoBoton=0;
void setup(){
  pinMode(12,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}
void loop() {
   estadoBoton = digitalRead(2);
   if (estadoBoton = HIGH)
     {Serial1.write(HIGH);}
   else
     {Serial1.write(LOW);}
   if(Serial1.availabel()>0)
     {in=Serial1.read();}
   if(in>0)
    {digitalWrite(12,HIGH);}
   else
     {digitalWrite(12,LOW);}
}
