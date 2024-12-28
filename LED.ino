const int trigpin=D1;
const int echopin=D3;
long duration;
int distance;
void setup() {
  pinMode(D1,OUTPUT);
  pinMode(D3,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(D1, LOW);
  delayMicroseconds(2);

  digitalWrite(D1, HIGH);
  delayMicroseconds(10);
  digitalWrite(D1, LOW);

  duration =pulseIn(D3,HIGH);

  distance = duration*0.034/2;

  Serial.print("distance:...");
  Serial.println(distance);
  delay(2000);
}
