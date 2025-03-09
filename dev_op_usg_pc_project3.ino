int fan=2;
int light=3;
void setup()
{
  pinMode(fan,OUTPUT);
  pinMode(light,OUTPUT);
  Serial.begin(9600);
  Serial.println("PRESS");
  Serial.println("A to ON fan");
  Serial.println("B to ON light");
  Serial.println("C to OFF fan"); 
  Serial.println("D to OFF light");
}

void loop()
{
  char a;
  if(Serial.available()>0)
  {
    a=Serial.read();
    Serial.print(a);
  }
  if(a=='A')
  {
  Serial.println("FAN ON");
  digitalWrite(fan,HIGH);
  }
  if(a=='B')
  {
  Serial.println("LIGHT ON");
  digitalWrite(light,HIGH);
  }
  if(a=='C')
  {
  Serial.println("FAN OFF");
  digitalWrite(fan,LOW);
  }
  if(a=='D')
  {
  Serial.println("LIGHT OFF");
  digitalWrite(light,LOW);
  }
}
