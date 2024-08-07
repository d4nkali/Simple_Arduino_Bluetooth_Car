/*

Codigo do carro robo com Arduino Uno controlado via bluetooth.

Autor: d4nkali
Data: 07/08/2024 (Primeira Versao: 14/04/2019)

*/

// Definido os pinos 

  const int motor1A = 2; // int1 para o pino 2
  const int motor1B = 3; // int2 para o pino 3
  const int motor2A = 4; // int3 para o pino 4
  const int motor2B = 5; // int4 para o pino 5

void setup() {

  // Define todos os pinos como saida
  
    pinMode(motor1A, OUTPUT);
    pinMode(motor1B, OUTPUT);
    pinMode(motor2A, OUTPUT);
    pinMode(motor2B, OUTPUT);

  Serial.begin(9600); // Inicia a comunicação serial

}

void loop() {



}

// FIM!
