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
7.  Les pins A0, A1 et A2 permettent de configurer l'adresse du périphérique de l'extérieur. L'opcode est un syntaxe pour uyn language bas niveau comme l'assembleur.
8.  Les INTA et INTB sont des sorties d'interrompts pour les PORTA et PORTB respectivement.
9.  La valeur de sortie d'une pin devrait être 0v (relier à la terre).
10. Les résistances R501 à R516 servent à protèger les leds et elles onts des différentes valeurs car les leds n'ont pas les mêmes couleur (donc differentes valuers de courants).

### Le GPIO Expander (MCP23S17) possède une mémoire (RAM) de 16 octets (voir table 3-1). Nous avons besoin de configurer uniqument les registres IODIRA, IODIRB, GPIOA et GPIOB.
11.
      IODIRA et IODIRB permettent de configurer la direction de data I/O.
      GPIOA et GPIOB : premettent de lire des données à partir d'entrée ou écrire dans une sortie.

12. Les IODIRA et IODIRB doivent être à zéros, pour que toutes les pins soient en sorties pour pouvoir commander les leds.
    Les GPIOA et GPIOB doivent être tous à 0 pour avoir les leds éteintes.
13. Les IODIRA et IODIRB doivent être à zéros, pour que toutes les pins soient en sorties pour pouvoir commander les leds.
    Les GPIOA et GPIOB doivent être tous à 1 pour avoir les leds allumées.
14. la led D508 est reliée à GPB7, donc on doit mettre le MSB de GPIOB à 0 et les restes en 1 (les autres pins de GPIOA et GPIOB).
15. 
