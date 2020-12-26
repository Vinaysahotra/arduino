
int trig=10;
int echo=9;
int timeinmicro;
float distancecm;
int buzz=7;

void setup() {
  Serial.begin(9600);
  
  pinMode(trig,OUTPUT);
  pinMode(buzz,OUTPUT);
   pinMode(echo,INPUT);
   
}

void loop() {
 digitalWrite(trig,LOW);
 delayMicroseconds(10);
 digitalWrite(trig,HIGH);
  delayMicroseconds(10);
 digitalWrite(trig,LOW);
timeinmicro=pulseIn(echo,HIGH);
distancecm=(timeinmicro*0.034326)/2;
delay(250);
Serial.println(distancecm);
 if(distancecm<5){
  digitalWrite(buzz,HIGH);
  Serial.println("<5");
  delay(10);
 }
  digitalWrite(buzz,LOW);
}
