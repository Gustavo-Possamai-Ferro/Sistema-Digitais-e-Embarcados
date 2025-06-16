#define pin_Led1 8
#define pin_Led2 9
#define pin_Led3 10
#define pin_Led4 11
#define pin_botao 2

void setup() {
 pinMode(pin_Led1, OUTPUT);
 pinMode(pin_Led2, OUTPUT);
 pinMode(pin_Led3, OUTPUT);
 pinMode(pin_Led4, OUTPUT);
 pinMode(pin_botao, INPUT);

}

void loop() {
 bool estado = digitalRead(pin_botao);
 if (estado == 1) {
    digitalWrite(pin_Led1, HIGH);
    digitalWrite(pin_Led3, HIGH);
    digitalWrite(pin_Led2, LOW);
    digitalWrite(pin_Led4, LOW);

 } else {
  digitalWrite(pin_Led2, HIGH);
  digitalWrite(pin_Led4, HIGH);
  digitalWrite(pin_Led1, LOW);
  digitalWrite(pin_Led3, LOW);
  }
}



