int LED = 13;
int BTN_A = 9;
int BTN_B = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BTN_A, INPUT_PULLUP);
  pinMode(BTN_B, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BTN_A) == LOW) {
    digitalWrite(LED, HIGH);
  }
  if (digitalRead(BTN_B) == LOW) {
    digitalWrite(LED, LOW);
  }
}
