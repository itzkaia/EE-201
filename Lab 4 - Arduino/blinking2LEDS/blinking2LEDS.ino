void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
}
