int sensorValue;
int outputValue;

void setup()
{
  // initialize serial communications at 9600 bps:
  serial.begin(9600);
}

void loop() 
{
  sensorValue=analogread(A0);
  outputValue=map(sensorValue,0,1023,0,255);
  analogWrite(9,outputValue);
  Serial.print("sensor value=");
  Serial.println(sensorValue);
  Serial.print("output value=");
  Serial.println(outputValue);
  delay(1000);

}
