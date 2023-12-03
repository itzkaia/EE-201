void setup() {
  // put your setup code here, to run once:
  for (int i = 6; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }

  for (int i = 11; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.begin(9000);

  // 9
  digitalWrite(6, LOW); // a
  digitalWrite(7, LOW); // b
  digitalWrite(8, LOW); // c
  digitalWrite(9, HIGH); // d
  digitalWrite(11, HIGH); // e
  digitalWrite(12, LOW); // f
  digitalWrite(13, LOW); // g
  delay(1500);

  // 8
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1500);

  // 7
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH); 
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1500);

  // 6
  digitalWrite(6, LOW); 
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1500);

  // 5
  digitalWrite(6, LOW); 
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(1500);

  // 4
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH); 
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW); 
  digitalWrite(13, LOW); 
  delay(1500);

  // 3
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1500);

  // 2
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1500);

  // 1
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, HIGH); 
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1500);

  // 0
  digitalWrite(6, LOW); 
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(9, LOW); 
  digitalWrite(11, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH);
  delay(1500);
}