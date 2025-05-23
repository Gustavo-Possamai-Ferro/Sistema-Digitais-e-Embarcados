#define pin_Led1 8
#define pin_Led2 9
#define pin_Led3 10
#define pin_Led4 11

void setup() {
  Serial.begin(9600);
  pinMode(pin_Led1, OUTPUT);
  pinMode(pin_Led2, OUTPUT);
  pinMode(pin_Led3, OUTPUT);
  pinMode(pin_Led4, OUTPUT);

}

void loop() {
  if (Serial.available() == 1) {
    char i = Serial.read();
    Serial.print(i);

  if (i == '1') {
  digitalWrite(pin_Led1, HIGH);
  }
    if (i == '2') {
  digitalWrite(pin_Led2, HIGH);
  }
    if (i == '3') {
  digitalWrite(pin_Led3, HIGH);
  }
    if (i == '4') {
  digitalWrite(pin_Led4, HIGH);
  }
    if (i == '5') {
  digitalWrite(pin_Led1, LOW);
  }
    if (i == '6') {
  digitalWrite(pin_Led2, LOW);
  }
    if (i == '7') {
  digitalWrite(pin_Led3, LOW);
  }
    if (i == '8') {
  digitalWrite(pin_Led4, LOW);
  }
  if (i == '9') {
    digitalWrite(pin_Led1, HIGH);
    digitalWrite(pin_Led2, HIGH);
    digitalWrite(pin_Led3, HIGH);
    digitalWrite(pin_Led4, HIGH);
  }
  if (i == '0') {
    digitalWrite(pin_Led1, LOW);
    digitalWrite(pin_Led2, LOW);
    digitalWrite(pin_Led3, LOW);
    digitalWrite(pin_Led4, LOW);  
  }
  }
}


