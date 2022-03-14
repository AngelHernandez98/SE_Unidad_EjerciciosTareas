/*
  Programa #11: Simulación de un Vúmetro con LEDS
  Hecho por: Hernández Licea Luis Armando
  8°I
*/

int leds[8] = {2, 3, 4, 5, 6, 7, 8, 9};
int v, alto, bajo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  v = random(9);
  Serial.println(v);
  encendidos(v);
  delay(50);
}

void encendidos(int led) {
  alto = 0;
  bajo = 8;
  while (bajo >= led) {

    digitalWrite(leds[bajo], 0); //apaga led
    bajo--;
   delay(5);
  }
  while (alto < led) {

    digitalWrite(leds[alto], 1); //enciende led
    alto++;
    delay(5);
  }


}
