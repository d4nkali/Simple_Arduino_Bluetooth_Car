/*

Codigo do carro robo com Arduino Uno controlado via bluetooth.

Autor: d4nkali
Data: 07/08/2024 (Primeira Versao: 14/04/2019)

*/

/*

# Localização dos pinos no Arduino UNO
 
### Alimentação: 

  - Alimentação +: VIN
  - Alimentação -: GND

### L298N: 

  - +12: Alimentação +
  - GND: Alimentação -
  - INT1: 2
  - INT2: 3
  - INT3: 4
  - INT4: 5

### HC-06 ou HC-05:

  - VCC: 5V
  - GND: GND
  - TXD: RX
  - RXD: Depois do Resistor de 10k e do de 20K
  - Primeira Perna Resistor de 10k: TX
  - Segunda Perna Resistor de 20K: GND

#

  **OBS:** Para usar o pino **RX** corretamente deve fazer um **divisor de tensão** para não queimar o modulo. 
  Então para isso deve colocar o *fio do arduino em um resistor 10k* e na outra ponta *ligar outro resistor de 20 ou 22k*, 
  no meio deles vai o *fio do sensor* e na outra ponta do de 22k vai um *fio ao GND* da placa.

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

  if (Serial.available() > 0) { // Se tiver precionado um comando no aplicativo, então

    char comando = Serial.read(); // Cria a variavel comando e ler o serial e armazena na variavel

    switch (comando) { // Se o comando for ...

      case 'F': // ...Frente, então avança

        digitalWrite(motor1A, HIGH);
        digitalWrite(motor1B, LOW);
        digitalWrite(motor2A, HIGH);
        digitalWrite(motor2B, LOW);
        break;

      case 'B': // ...Tras, então recua

        digitalWrite(motor1A, LOW);
        digitalWrite(motor1B, HIGH);
        digitalWrite(motor2A, LOW);
        digitalWrite(motor2B, HIGH);
        break;

      case 'L': // ...Esquerda, então vira à esquerda

        digitalWrite(motor1A, LOW);
        digitalWrite(motor1B, HIGH);
        digitalWrite(motor2A, HIGH);
        digitalWrite(motor2B, LOW);
        break;

      case 'R': // ...Direita, então vira à direita

        digitalWrite(motor1A, HIGH);
        digitalWrite(motor1B, LOW);
        digitalWrite(motor2A, LOW);
        digitalWrite(motor2B, HIGH);
        break;

      case 'S': // ...Nenhum, então para

        digitalWrite(motor1A, LOW);
        digitalWrite(motor1B, LOW);
        digitalWrite(motor2A, LOW);
        digitalWrite(motor2B, LOW);
        break;

    }

  }

}

// FIM!
