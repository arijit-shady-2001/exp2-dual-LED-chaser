void setup() 
{
  
for(i=9;i<=12;i++)
{
  pinMode(i,OUTPUT);  
}
}

void loop() 
{
  int j;
  for(j=9;j<=12;j++)
  {
digitalWrite(j,HIGH);
delay(500);
digitalWrite(j,LOW);
delay(500);
  }

}
