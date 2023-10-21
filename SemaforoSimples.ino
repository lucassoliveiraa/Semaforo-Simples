void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  for(int i = 1; i <= 3; i++) {
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);

  }
}

