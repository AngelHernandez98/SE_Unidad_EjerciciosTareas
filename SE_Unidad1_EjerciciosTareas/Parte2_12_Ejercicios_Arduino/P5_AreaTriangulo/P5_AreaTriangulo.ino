/*
  Programa #05: Área de un Triangulo
  Hecho por: Gámez Hernández Carlos Eduardo
  8°G
*/

String BaseString;
int BaseInt;
String AlturaString;
int AlturaInt;
double Resultado = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Area_Triangulo();
}

void Area_Triangulo() {
  
  if (Serial.available() > 0) { 
    BaseString = Serial.readString();
    Serial.println("Base: " + BaseString); 
  }
  if (Serial.available()){
    AlturaString = Serial.readString();
    Serial.println("Altura: " + AlturaString);
    Resultad();
  }
  
}

void Resultad(){
  BaseInt = BaseString.toInt();
  AlturaInt = AlturaString.toInt();
  Resultado = (BaseInt * AlturaInt) / 2 ;
  Serial.println("Area: " + String(Resultado));
}
