/**
 * Relay Switch
 * 
 * The program alternatively turns ON/OFF the relay switch.
 */

/* Defining pins. */
int relayPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relayPin, HIGH);
  delay(2000);
  digitalWrite(relayPin, LOW);
  delay(2000);
}
