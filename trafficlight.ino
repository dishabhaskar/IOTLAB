int rpin=11;
int gpin=12;
int ypin=13;
void setup() {
  // put your setup code here, to run once:
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(ypin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(rpin,HIGH);
 digitalWrite(gpin,LOW);
 digitalWrite(ypin,LOW);
 delay(1000);
 digitalWrite(rpin,LOW);
 digitalWrite(gpin,HIGH);
 digitalWrite(ypin,LOW);
 delay(1000);
 digitalWrite(rpin,LOW);
 digitalWrite(gpin,LOW);
 digitalWrite(ypin,HIGH);
 delay(1000);
 
}
