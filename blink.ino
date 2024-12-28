const int ledpin = 8;
void setup() {
  pinMode(ledpin, OUTPUT);

}

void loop() {
  
  digitalWrite(ledpin, HIGH);
  delay(3000);
  digitalWrite(ledpin, LOW);
  delay(3000);

}
