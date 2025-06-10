#define pin_led1 10
#define pin_led2 11
#define pin_led3 12
#define pin_led4 13

#define pin_botaoA 3
#define pin_botaoB 4

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);

  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
}
void loop() {

 bool botaoA = digitalRead(pin_botaoA);
 bool botaoB = digitalRead(pin_botaoB);

 if (botaoA == 1 && botaoB == 1) {
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
 } else {
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);

}
}
