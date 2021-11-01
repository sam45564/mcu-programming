/**
 * Tilt Swtich / Ball Switch
 * 
 * The Tilt Switch indicates inclination and then sends response to the circuit accordingly. An LED
 * connected to the circuit will give results of the changing inclination.
 */

/* Defining pins */
int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchValue = digitalRead(2);

  if (HIGH == switchValue) {
    digitalWrite(LED, LOW);
  }
  else {
    digitalWrite(LED, HIGH);
  }
}
