int w1=2;int w2=3;int w3=4;int w4=5;
int ow1=6;int ow2=7;int ow3=8;int ow4=9;
int swt1=10;int swt2=11;int swt3=12;int swt4=13;
int swt1st=0;int swt2st=0;int swt3st=0;int swt4st=0;
void setup()
{
  pinMode(swt1,INPUT);pinMode(swt2,INPUT);pinMode(swt3,INPUT);pinMode(swt4,INPUT);
  pinMode(w1,OUTPUT);pinMode(w2,OUTPUT);pinMode(w3,OUTPUT);pinMode(w4,OUTPUT);
  pinMode(ow1,OUTPUT);pinMode(ow2,OUTPUT);pinMode(ow3,OUTPUT);pinMode(ow4,OUTPUT);
  Serial.begin(9600);
  Serial.println("ROBOT OPERATION");
}

void loop() 
{
  digitalWrite(w1,LOW);digitalWrite(w2,LOW);digitalWrite(w3,LOW);digitalWrite(w4,LOW);
  digitalWrite(ow1,LOW);digitalWrite(ow2,LOW);digitalWrite(ow3,LOW);digitalWrite(ow4,LOW);
  swt1st=digitalRead(swt1);
  swt2st=digitalRead(swt2);
  swt3st=digitalRead(swt3);
  swt4st=digitalRead(swt4);
if(swt1st==0)
{
  digitalWrite(w1,HIGH);digitalWrite(w2,HIGH);digitalWrite(w3,HIGH);digitalWrite(w4,HIGH);
  Serial.println("ROBOT MOVING FRONT");
}
if(swt2st==0)
{
  digitalWrite(ow1,HIGH);digitalWrite(ow2,HIGH);digitalWrite(ow3,HIGH);digitalWrite(ow4,HIGH);
  Serial.println("ROBOT MOVING BACK");
}
if(swt3st==0)
{
  digitalWrite(w1,HIGH);digitalWrite(w2,HIGH);digitalWrite(w3,HIGH);digitalWrite(w4,HIGH);
  Serial.println("ROBOT MOVING RIGHT");
}
if(swt4st==0)
{
  digitalWrite(ow1,HIGH);digitalWrite(ow2,HIGH);digitalWrite(ow3,HIGH);digitalWrite(ow4,HIGH);
  Serial.println("ROBOT MOVING LEFT");
}
}
