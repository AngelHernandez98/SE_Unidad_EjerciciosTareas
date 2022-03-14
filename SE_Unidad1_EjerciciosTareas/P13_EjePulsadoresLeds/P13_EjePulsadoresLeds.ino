int pushButton[5] = {9, 10, 11, 12, 13};  //pines de los botones
int botones[5] = {0, 0, 0, 0, 0};         //guarda el estado de los botones
int leds[5] = {2, 3, 4, 5, 6};            //pines de los leds
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(pushButton[i], INPUT_PULLUP); //modo de operacion a pines botones
    pinMode(leds[i], OUTPUT);             //modo de operacion a pines led
  }
  Serial.begin(9600);                     //comunicacion serial
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++) {
    botones[i] = digitalRead(pushButton[i]);  //lectura botones y guardado negado
    //Serial.println(botones[i]);               //impresion serial botones
  }
  for(int i = 0; i < 5; i++){
        Serial.print(botones[i]);   
    }
 Serial.println("");                          //salto de linea
  for (int f = 0; f < 5 ; f++) {              
    if (botones[f] == 0) {                    //si algun boton esta en cero se ejecuta el switch case
      switch (f) {                //se enciende el led correspondiente al boton
        case 0:
          digitalWrite(leds[0], 1);          
          break;
        case 1:
          digitalWrite(leds[1], 1);          
          break;
        case 2:
          digitalWrite(leds[2], 1);          
          break;
        case 3:
          digitalWrite(leds[3], 1);          
          break;
        case 4:
          digitalWrite(leds[4], 1);       
          break;
      }
    }
  }
  delay(100);
  for (int i = 0; i < 5 ; i++) {    // de apagan todos los botones 
      digitalWrite(leds[i], 0);
  }
}
