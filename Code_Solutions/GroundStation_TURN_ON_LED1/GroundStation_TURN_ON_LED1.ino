//THIS PROGRAM TURNS ON LED1 CONNECTED TO PIN 4 ON THE ARDUINO NANO GROUND STATION

#define LED1 4
void setup() {
pinMode(LED1, OUTPUT);

}

void loop() {
  digitalWrite(LED1, HIGH);

}
