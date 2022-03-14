/*
  Programa #10: Multiplicación de Matrices de 2x2
  Hecho por: Hernández Hernández Angel Anastasio
  8°G
*/

String matrizStringA;
String matrizStringB;
int matrizA [4];
int matrizB [4];
int matrizC [4];
int aux = 0;
int mC11 = 0;
int mC12 = 0;
int mC21 = 0;
int mC22 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    llenarMZ_A();
    delay(5000);
    llenarMZ_B();
    multiplicacionMZ_AxB();
  }
}

void llenarMZ_A() {
    matrizStringA = Serial.readString();
    for (int x = 0; x < 4; x++) {
      aux = matrizStringA.indexOf(",");
      matrizA[x] = matrizStringA.substring(0, aux).toInt();
      matrizStringA = matrizStringA.substring(aux + 1);
    }

    Serial.println("Matriz A");
    for (int x = 0; x < 2; x++) {
      Serial.print(String("[") + matrizA[x] + String("]"));
    }
    Serial.println();
    for (int x = 2; x < 4; x++) {
      Serial.print(String("[") + matrizA[x] + String("]"));
    }
    Serial.println("\n");
}

void llenarMZ_B() {
    matrizStringB = Serial.readString();
    for (int y = 0; y < 4; y++) {
      aux = matrizStringB.indexOf(",");
      matrizB[y] = matrizStringB.substring(0, aux).toInt();
      matrizStringB = matrizStringB.substring(aux + 1);
    }

    Serial.println("Matriz B");
    for (int y = 0; y < 2; y++) {
      Serial.print(String("[") + matrizB[y] + String("]"));
    }
    Serial.println();
    for (int y = 2; y < 4; y++) {
      Serial.print(String("[") + matrizB[y] + String("]"));
    }
    Serial.println("\n");

}

void multiplicacionMZ_AxB() {
  Serial.println("Resultado de la Multiplicación de la Matriz A y B");
  Serial.println("Matriz C");
  mC11 = (matrizA[0] * matrizB[0]) + (matrizA[1] * matrizB[2]);
  mC12 = (matrizA[0] * matrizB[1]) + (matrizA[1] * matrizB[3]);
  mC21 = (matrizA[2] * matrizB[0]) + (matrizA[3] * matrizB[2]);
  mC22 = (matrizA[2] * matrizB[1]) + (matrizA[3] * matrizB[3]);
  Serial.println("[" + String(mC11) + " " + String(mC12) + "]");
  Serial.println("[" + String(mC21) + " " + String(mC22) + "]");

}
