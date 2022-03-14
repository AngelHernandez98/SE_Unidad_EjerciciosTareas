/*
  Programa #09: Llevar a cabo la ejecución de dos sucesiones diferentes 
                (predefinidas) y mostrar su evolución de manera creciente
  Hecho por: Hernández Hernández Noel
  8°I
*/

void setup() {
 Serial.begin(9600);
 Serial.println("Sucesiones Diferentes ");
 
 for (int i = 1; i < 11; i++){
  Serial.print("Serie 1: ");
  Serial.print(i);
  Serial.print("=");
  Serial.println(2*i);
  Serial.print("Serie 2: ");
  Serial.print(i);
  Serial.print("=");
  Serial.println(3*i);

  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
