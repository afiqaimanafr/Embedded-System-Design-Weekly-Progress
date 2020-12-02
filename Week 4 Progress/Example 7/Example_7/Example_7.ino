int redLED=8; 
int yelLED=9;
int dit=750; //time ON for LED 1
int dah=250; //time OFF for LED 1
int ditt=400; //time ON for LED 2
int dahh=600; //time OFF for LED 2


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT); //LED 1 set to pin 8
  pinMode(yelLED, OUTPUT); //LED 2 set to pin 9

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(dit); //LED 1 ON with time of 750 ms
  digitalWrite(redLED, LOW);
  delay(dah); //LED 1 OFF with time of 350 ms

  digitalWrite (yelLED,HIGH);
  delay(ditt); //LED 2 ON with time of 400 ms
  digitalWrite(yelLED, LOW);
  delay(dahh); //LED 2 OFF with time of 600 ms

}
