/*
  Programa #12: Aplicar el examen de una tabla de multiplicar indicada por el usuario
  Hecho por: Hernández Hernández Angel Anastasio
  8°G
*/

String numeroTablaString;
String respuestaString;
String correctoString;
String incorrectoString;
int respuestaInt;
int correctoInt = 0;
int incorrectoInt = 0;
int aux;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  examenTablaMultiplicar();
}

void examenTablaMultiplicar() {

  if (Serial.available() > 0) {
    numeroTablaString = Serial.readString().toInt();

    for (int x = 1; x <= 10; x++) {
      Serial.print(numeroTablaString + " X " + x + " = ");
      delay(3000);
      if (Serial.available()) {
        respuestaString = Serial.readString();
        Serial.println(respuestaString);
        respuestaInt = respuestaString.toInt();
        aux = numeroTablaString.toInt();

        if (respuestaInt == aux * x) {
          correctoInt = correctoInt + 1;
        }
        else {
          incorrectoInt = incorrectoInt + 1;
        }
      }
    }

    if (correctoInt > 5) {
      correctoString = correctoInt;
      Serial.println("Aprobaste el examen con una calificación de " + correctoString);
    }
    else {
      incorrectoString = incorrectoInt;
      Serial.println("Reprobaste el examen con una calificación de " + incorrectoString);
    }
    
  }

}
