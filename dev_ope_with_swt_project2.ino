int swt1=1;
int fan=2;
int swt2=3;
int light=4;
int swt1state=0;
int swt2state=0;
void setup()
{
  pinMode(fan,OUTPUT);
  pinMode(light,OUTPUT);
  pinMode(swt1,INPUT);
  pinMode(swt2,INPUT);
}
void loop() 
{
  swt1state=digitalRead(swt1);
  swt2state=digitalRead(swt2);
  if(swt1state==1)
  {
    digitalWrite(light,LOW);
  }
  if(swt1state==0)
  {
    digitalWrite(light,HIGH);
  }
  if(swt2state==1)
  {
    digitalWrite(fan,LOW);
  }
  if(swt2state==0)
  {
    digitalWrite(fan,HIGH);
  }
}
