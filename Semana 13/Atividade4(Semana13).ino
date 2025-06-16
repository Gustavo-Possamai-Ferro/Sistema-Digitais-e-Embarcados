# define pin_led1 13
# define pin_led2 12
# define pin_led3 11
# define pin_led4 10
# define pin_botaoA 2
# define pin_botaoB 3

void setup() {
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

  if(estado1 ==1 && estado2 == 1) {
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
    if(estado1 == 1 || estado2 == 1) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
    if(estado1 == 1 ^ estado2 == 1) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
      if(estado1 == 1 ^ estado2 == 1) {
    digitalWrite(pin_led4, 1);
  } else {
    digitalWrite(pin_led4, 0);
  }
}
