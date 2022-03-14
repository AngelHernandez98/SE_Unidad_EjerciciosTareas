/*
  Programa #03: Potencia Y de un número X
  Hecho por: Hernández Licea Luis Armando
  8°I
*/

String valorS, dato;
int valorY, valorX, tmp = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  leerDato();// se ingresa primero la Y y despues X
  delay(5);
}



void leerDato() {

  if (Serial.available()) {
    valorS = Serial.readString();// valor Y separado de X por coma Y,X
    tmp = valorS.indexOf(",");
    valorY = valorS.substring(0, tmp).toInt(); // se extrae el valor Y y se convierte a int
    Serial.println("Valor Y: " + String(valorY));
    
    valorX = valorS.substring(tmp+1, valorS.length()).toInt();// se extrae el valor X y se convierte a int
    Serial.println("Valor X: " + String(valorX));
    potencia(valorY, valorX);

  }
}
void potencia(int datoY, int datoX) {
  tmp = pow(datoY, datoX);
  Serial.println(String(datoY) + "^" + String(datoX) + "=" + String(pow(datoY, datoX)));
}
