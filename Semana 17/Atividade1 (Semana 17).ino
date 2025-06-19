#define PIN_LED    13
#define PIN_BOTAO  2

byte estadoPiscar = 0;
bool estadoBotaoAnterior = HIGH;
unsigned long ultimoTempo = 0;
bool estadoLed = LOW;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BOTAO, INPUT_PULLUP);
}

void loop() {
  bool estadoBotao = digitalRead(PIN_BOTAO);

  if (estadoBotao == LOW && estadoBotaoAnterior == HIGH) {
    delay(50);
    if (digitalRead(PIN_BOTAO) == LOW) {
      estadoPiscar = 1 - estadoPiscar;
    }
  }

  estadoBotaoAnterior = estadoBotao;

  if (estadoPiscar == 1) {
    if (millis() - ultimoTempo >= 500) {
      ultimoTempo = millis();
      estadoLed = !estadoLed;
      digitalWrite(PIN_LED, estadoLed);
    }
  } else {
    digitalWrite(PIN_LED, LOW);
    estadoLed = LOW;
  }
}
