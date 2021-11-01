byte seven_seg_digits[10] = {
    B11111100,
    B01100000,
    B11011101,
    B11110010,  // = 3
    B01100110,  // = 4
    B10110110,  // = 5
    B10111110,  // = 6
    B11100000,  // = 7
    B11111110,  // = 8
    B11100110  
  };
  
int latchPin = 6;
int clockPin = 5;
int dataPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (byte digit = 10; digit > 0; --digit) {
    delay(1000);
    sevenSegWrite(digit);
  }

  delay(4000);
}

void sevenSegWrite(byte digit) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, seven_seg_digits[digit]);
  digitalWrite(latchPin, HIGH);  
}
