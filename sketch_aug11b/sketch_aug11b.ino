int potPen = A0; // Potentiometer connected to pin A0
int readVal; // Get Value from PIN
float voltage;

int R = 9;
int G = 5;
int B = 3;


void setup() {
  pinMode(potPen, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(potPen);
  delay(250);

  if (readVal < 350) {
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  } else if (readVal > 350 && readVal < 700) {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW); 
  } else {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
}
