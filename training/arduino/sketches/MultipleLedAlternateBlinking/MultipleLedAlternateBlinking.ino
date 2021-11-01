int latchPin = 6;
int clockPin = 5;
int dataPin = 4;

byte leds = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leds = 0;
  updateShiftRegister();
  delay(200);
  for (int i = 0; i < 8; i++) {
    bitSet(leds, i);
    updateShiftRegister();
    delay(200);
  }
}

void updateShiftRegister() {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}
