int LED = 2;
int SENSOR = 6;
int analogIN = A0;
float readValue;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SENSOR, OUTPUT);
  pinMode(analogIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(SENSOR, OUTPUT);
  readValue = max(analogRead(analogIN) - 500, 0);
  Serial.println(readValue);
  
  analogWrite(LED, readValue);

}
