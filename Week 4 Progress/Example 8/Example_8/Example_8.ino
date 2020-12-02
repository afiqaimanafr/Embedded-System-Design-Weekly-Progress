int A = 2;
int B = 3; 
int currentState = 0;
int previousState = 0;
int count[2];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A, INPUT_PULLUP);
  pinMode(B, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  countUpdate(A);
  countUpdate(B);
  Serial.print("A = "), Serial.print(count[0]), Serial.print("   ");
  Serial.print("B = "), Serial.print(count[1]), Serial.print("   ");
}

void countUpdate(int pin)
{
  if (digitalRead(pin))
    currentState = 1;

  else
    currentState = 0;

  if (currentState != previousState)
  {
    if (currentState == 1)
      count[pin - 2] = count[pin - 2] + 1;
  }

  previousState = currentState;
  delay(250);
}
