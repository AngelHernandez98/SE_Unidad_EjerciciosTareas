/*
  Programa #08: Leer números hasta que uno de ellos sea negativo e imprimir cuantos fueron ingresados,
                sin contar el negativo
  Hecho por: Hernández Hernández Angel Anastasio
  8°G
*/

String numeroString;
double numeroDouble;
int contadorNumero = 0;
bool bandera = true;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ingresarNumero();
}

void ingresarNumero() {
  while (bandera == true) {
    if (Serial.available()) {
      numeroString = Serial.readString();
      Serial.println(numeroString);
      numeroDouble = numeroString.toInt();
      numeroString = "";
      if (0 < numeroDouble) {
        contadorNumero = contadorNumero + 1;
      }
      else {
        bandera = false;
        if (bandera == false) {
          Serial.println("Cantidad de números positivos ingresados: " + String(contadorNumero));
        }
      }
    }
  }
}
