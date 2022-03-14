int leds[8] = {2, 3, 4, 5, 6, 7, 8, 9}, cociente, residuo;

String valorS, binario, auxS, bin, temporal = "";


//ingresar palabra en minusculas y representar
//letra a letra en ascii mediante los leds
//tiempo visualizacion por letra 5 segundos
//cambio entre cada letra 2 segundos
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  leerDato();
}

void leerDato() {
  if (Serial.available()) {
    valorS = Serial.readString();     // Palabra en minusculas ingresada
    char caracteres[valorS.length()]; //vector para guardar caracteres
    valorS.toCharArray(caracteres, valorS.length());// se guardan caracteres en vetor

    for (int i = 0; i < valorS.length() - 1; i++) {//
      //binario = String((int)caracteres[i], BIN);  //convierte char a entero despues a binario y por ultimo a string(opcion1)
      binario = "0" + decToBin((int)caracteres[i]);    //funcion convierte entero a binario(opcion2)
      Serial.println(String(i) + " Letra: " + caracteres[i]);
      Serial.println("Binario: " + binario);


      encenderLed(binario);
    }
  }
}

void encenderLed(String bin) {
  for (int i = 0; i < 8 ; i++) {
    if (String(bin[i]) == "1") {
      digitalWrite(leds[i], 1);//enciende led si es 1
    }
  }
  delay(5000);//duracion muestra letra 5 segundos
  for (int j = 1; j < 8 ; j++) {
    digitalWrite(leds[j], 0);//apaga todos los leds
  }
  delay(2000);//apaga leds durante 2 segundos


}

String decToBin(int a) {//conversion decimal a binario otro metodo
  bin = "";
  while (a > 0) {
    residuo = 1;
    cociente = a / 2;
    if (cociente * 2 == a) {
      residuo = 0;
    }
    auxS = auxS + String(residuo);
    a = cociente;
  }
  bin = invertirCadena(auxS);
  auxS = "";
  return bin;
}

String invertirCadena(String s) {
  temporal = "";
  for (int m = s.length() - 1; m >= 0; m--)
    temporal += s[m];
  return temporal;
}
