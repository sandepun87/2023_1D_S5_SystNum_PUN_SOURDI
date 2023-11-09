# 2023_1D_S5_SystNum_PUN_SOURDI
## 4.1 Découverte du composant : MCP23S17
1. Le rôle de MCP23S17 est d'avoir un interface SPI et manipuler expander input/output 16 bits.
2. Il peut gérer 16 bits I/O simultanément.
3. Pour nous, ces GPIO sont configurés en sortie car nous allons avoir les signaux en oscilloscope.
4. Ce composant peut atteindre jusqu'à 10 MHz maximum.
5. Les pins qui sont reliés au micro-contrôleur sont suivents:
    a. PA5 -> SCK (serial clock)
    b. PA7 -> MOSI (master out slave in)
    c. PA6 -> MISO (master in slave out)
    d. PA4 -> SS (slave select)
6.
    a. PA5 -> SCK -> 12
    b. PA7 -> MOSI -> 13
    c. PA6 -> MISO -> 14
    d. PA4 -> SS ->   11
7.  Les pins A0, A1 et A2 permettent de déterminer l'adresse du périphérique de l'extérieur. 'opcode?'
8.  Les INTA et INTB sont des sorties d'interrompts pour les PORTA et PORTB respectivement.
9.  La valeur de sortie d'une pin devrait être 0v (relier à la terre).
10.  
