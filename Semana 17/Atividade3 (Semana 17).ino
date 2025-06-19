#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5

#define BOTAO1 6
#define BOTAO2 7

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(BOTAO1, INPUT_PULLUP);
  pinMode(BOTAO2, INPUT_PULLUP);
}

void loop() {
  bool b1 = digitalRead(BOTAO1) == LOW;
  bool b2 = digitalRead(BOTAO2) == LOW;

  if (b1) {
    digitalWrite(LED1, HIGH); delay(200); digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH); delay(200); digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH); delay(200); digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH); delay(200); digitalWrite(LED4, LOW);
  } 
  else if (b2) {
    digitalWrite(LED4, HIGH); delay(200); digitalWrite(LED4, LOW);
    digitalWrite(LED3, HIGH); delay(200); digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH); delay(200); digitalWrite(LED2, LOW);
    digitalWrite(LED1, HIGH); delay(200); digitalWrite(LED1, LOW);
  } 
  else {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
}
