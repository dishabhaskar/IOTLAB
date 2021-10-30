int outputpin=0;
int celsius;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
 int rawvoltage=analogRead(outputpin);
 float millivolts=(rawvoltage/1024.0)*5000;
 float celsius=millivolts/10;
 Serial.println(celsius);
 Serial.println("degrees celsius:");
 Serial.println((celsius*9)/5);
 delay(1000);
} 
