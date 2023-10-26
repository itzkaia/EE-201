void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7)) {
    Serial.write("Hello World! \n");
  } else if (!digitalRead(7)) {
    Serial.write("It's 2023 \n");
  }
}
