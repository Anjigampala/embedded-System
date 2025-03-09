int ir=3;
int led=12;
void setup()
{
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  int a;
  a=digitalRead(ir);
  if(a==HIGH)
  {
    digitalWrite(led,HIGH);
    Serial.println("object detected");
  }
  else
  {
    digitalWrite(led,LOW);
    Serial.println("object not detected");
  }
}
