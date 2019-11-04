# exp2-dual-LED-chaser
A LED chaser consisting of 2 LEDs

void setup() 
{
for int i;  
for(i=10;i<=11;i++)
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
