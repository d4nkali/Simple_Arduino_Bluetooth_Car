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

  **OBS:** Para usar o pino **RX** corretamente deve fazer um **divisor de tensão** para não queimar o modulo. Então para isso deve colocar o *fio do arduino em um resistor 10k* e na outra ponta *ligar outro resistor de 20 ou 22k*, no meio deles vai o *fio do sensor* e na outra ponta do de 22k vai um *fio ao GND* da placa.
