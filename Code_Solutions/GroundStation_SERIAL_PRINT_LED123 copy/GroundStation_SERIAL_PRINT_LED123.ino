#define LED1 4
#define LED2 6
#define LED3 8

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);  //Initialise the Serial Communication
}

void loop() {
  digitalWrite(LED1, HIGH);
  Serial.print("LED1 is ON"); //Use the serial printer to say the message you want
  delay(500);
  digitalWrite(LED2, HIGH);
  Serial.print("LED1 is ON"); //Use the serial printer to say the message you want
  delay(500);
  digitalWrite(LED3, HIGH);
  Serial.print("LED1 is ON"); //Use the serial printer to say the message you want
  delay(500);
}
