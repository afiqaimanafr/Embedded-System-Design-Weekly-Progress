int redLED=8; 
int yelLED=9;
int greLED=10;
int reddLED=11;
int dit=781; //time ON for LED 1
int dah=515; //time OFF for LED 1
int ditt=2014; //time ON for LED 2
int dahh=1348; //time OFF for LED 2
int dittt=343; //time ON for LED 3
int dahhh=573; //time OFF for LED 3
int ditttt=777; //time ON for LED 4
int dahhhh=888; //time OFF for LED 4

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT); //LED 1 set to pin 8
  pinMode(yelLED, OUTPUT); //LED 2 set to pin 9
  pinMode(greLED, OUTPUT); //LED 3 set to pin 10
  pinMode(reddLED, OUTPUT); //LED 4 set to pin 11
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(dit); //LED 1 ON with time of 781 ms
  digitalWrite(redLED, LOW);
  delay(dah); //LED 1 OFF with time of 515 ms

  digitalWrite (yelLED,HIGH);
  delay(ditt); //LED 2 ON with time of 2014 ms
  digitalWrite(yelLED, LOW);
  delay(dahh); //LED 2 OFF with time of 1348 ms

  digitalWrite(greLED, HIGH);
  delay(dittt); //LED 3 ON with time of 343 ms
  digitalWrite(greLED, LOW);
  delay(dahhh); //LED 3 OFF with time of 573 ms

  digitalWrite (reddLED,HIGH);
  delay(ditttt); //LED 4 ON with time of 777 ms
  digitalWrite(reddLED, LOW);
  delay(dahhhh); //LED 4 OFF with time of 888 ms
}
