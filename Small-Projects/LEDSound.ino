  int switchPin= 8;
  int ledPin = 13;
  int ledPin2 = 6;
  int ledPin3 = 4;
  int counter = 0;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  if(digitalRead(switchPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    tone(3,3400);
    delay(400);
    digitalWrite(ledPin2, HIGH);
    tone(3,3038);
    delay(400);
    digitalWrite(ledPin3, HIGH);
    tone(3, 2550);
    delay(400);
    noTone(3);
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
