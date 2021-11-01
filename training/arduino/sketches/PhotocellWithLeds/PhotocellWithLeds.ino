/**
 * Photocell
 * 
 * This program controls the LEDs with the help of Photocell/LDR. Based on the value of 
 * LDR the LEDs will light up.
 */

/* Declaring pins and additional variables. */
int photocellPin = 0;
int dataPin = 4;
int latchPin = 5;
int clockPin = 6;

int leds = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(dataPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photocellReading = analogRead(photocellPin);
  int lit = photocellReading / 57; // 1023 / 9 / 2
  leds = 0;
  
  if (lit > 8) lit = 8;

  for (int i = 0; i < lit; i++) {
    leds = leds + ( 1 << i);  //  sets the i'th bit
  }

  updateShiftRegister();
}


void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
