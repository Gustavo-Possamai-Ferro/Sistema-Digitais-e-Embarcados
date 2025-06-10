# define pin_led1 13
# define pin_led2 12
# define pin_led3 11
# define pin_led4 10
# define pin_botaoA 2
# define pin_botaoB 3
int conta = 0;
int soma = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
}

void loop() {
  bool estado1 = digitalRead(pin_botaoA);
  bool estado2 = digitalRead(pin_botaoB);

  if (conta >= 0 && conta < 50)
    if (estado1 == 1 && soma == 0 ) {
    conta += 1;
    soma += 1;
  }
  if (estado1 == 0 && estado2 == 0) {
    soma = 0;
  }
  if (conta > 0 && conta <= 50)
    if (estado2 == 1 && soma == 0) {
    conta -= 1;
    soma += 1;
  }
  Serial.println(conta);

  if (conta % 2) == 1 {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }
  if (((conta == >> 1) % 2) == 1) {
    digitalWrite(pin_led2, HIGH);
  } else {
      digitalWrite(pin_led2, LOW);
  }
    if (((conta == >> 2) % 2) == 1) {
    digitalWrite(pin_led3, HIGH);
  } else {
      digitalWrite(pin_led3, LOW); 
    
      if (((conta == >> 3) % 2) == 1) {
    digitalWrite(pin_led4, HIGH);
  } else {
      digitalWrite(pin_led4, LOW);
}