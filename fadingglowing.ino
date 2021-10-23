int expin = 9;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(expin , OUTPUT);
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  int i;
  for(i=0;i<=255;i++)
  {
    analogWrite(expin,i);
    delay(30);
  }
  for(i=255;i>=0;i--)
  {
    analogWrite(expin,i);
    delay(30);
  }
}
