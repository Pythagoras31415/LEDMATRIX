// 74HC595 que se encarga de las columnas
int latchPin = 5;  // Latch pin conectado a pin 5  cable AMARILLO 
int clockPin = 6; // Clock pin conectado a pin 6 cable NARANJA
int dataPin = 4;  // Data pin conectado a pin 4 cable VERDE

// 74HC595 pulso que se encarga de las filas
int latchPin2 = 8;  // Latch pin conectado a pin 8  cable AMARILLO 
int clockPin2 = 9; // Clock pin conectado a pin 9 cable NARANJA
int dataPin2 = 7; // Data pin conectado a pin 7 cable VERDE

byte ledv = B00000000;    	// Variable que almacena el patrón de las columnas. Toma valores hasta 00011111.
byte ledh = B11111110;		// Variable que almacena el patrón de las filas. Toma los primeros siete bits de izquierda a derecha.

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);

  pinMode(latchPin2, OUTPUT);
  pinMode(dataPin2, OUTPUT);  
  pinMode(clockPin2, OUTPUT);
}

void loop() {
  //escribe aqui
  U();N();I();T();E();C();

  esp();esp();
}

/*
 * updateShiftRegister() - Esta función pone el latchPin a BAJO, luego llama a la función 'shiftOut' 
 * para deszplazar el contenido de la variable 'leds' en el shift register antes de poner el 'latchPin' en ALTO otra vez.
 */

// Función que controla el 74HC595 de las columnas
void updateShiftRegister(){
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, MSBFIRST, ledv);
   digitalWrite(latchPin, HIGH);
}

// Función que controla el 74HC595 de las filas
void updateShiftRegister2(){
   digitalWrite(latchPin2, LOW);
   shiftOut(dataPin2, clockPin2, LSBFIRST, ledh);
   digitalWrite(latchPin2, HIGH);
}

/*
** Las letras son hechas por trazos debido a que no se pueden encender todos los LED de manera independiente.
** Estos trazos son espaciados entre sí por 4 milisegundos para evitar que la carga que queda como residuo encienda otros LED. 
*/

// Letra A
void A()
{
  for(int i = 0; i < 55; i++){

	// Trazo 1:
    ledv = B00010001;
    ledh = B10000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
	// Trazo 2:
    ledv = B00001110;
    ledh = B01110110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra B
void B()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01101100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B10010010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra C
void C()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B10000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B10111010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra D
void D()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B10000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra E
void E()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00011111;
    ledh = B01111110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00011110;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00011111;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
  }
}

// Letra F: aparentemente 'F' es un nombre reservado, por lo cual se tuvo que cambiar el nombre. 
void efe()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00011111;
    ledh = B01111110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00011110;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
  }
}

// Letra G
void G()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B10000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000111;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
    
    ledv = B00000100;
    ledh = B11110110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B10110010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra H
void H()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra I
void I()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00000100;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00011011;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra J
void J()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00000010;
    ledh = B00000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001100;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00010000;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra K
void K()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001100;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000010;
    ledh = B11010110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
    
    ledv = B00000001;
    ledh = B00111000;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
  }
}

// Letra L
void L()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001111;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra M
void M()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001010;
    ledh = B10111110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11001110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra N
void N()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001000;
    ledh = B11011110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000010;
    ledh = B11110110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra O
void O()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B10000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra P
void P()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
    
    ledv = B00000001;
    ledh = B10011110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
  }
}

// Letra Q
void Q()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B10000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);

    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);

    ledv = B00000100;
    ledh = B11110110;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);

    ledv = B00000010;
    ledh = B11111010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra R
void R()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
    
    ledv = B00000001;
    ledh = B10010000;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
  }
}

// Letra S
void S()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B10011100;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B01101100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B01110010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
   }
}

// Letra T
void T()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00000100;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00011011;
    ledh = B01111110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra U
void U()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000010;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001110;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra V
void V()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000110;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001010;
    ledh = B11111010;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra W
void W()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00000000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001010;
    ledh = B11111010;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11100110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra X
void X()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00111000;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001010;
    ledh = B11010110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11101110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra Y
void Y()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010001;
    ledh = B00111110;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
    
    ledv = B00001010;
    ledh = B11011110;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B11100000;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Letra Z
void Z()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00010000;
    ledh = B01111000;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
    
    ledv = B00001000;
    ledh = B01110100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000100;
    ledh = B01101100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000010;
    ledh = B01011100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);

    ledv = B00000001;
    ledh = B00111100;
    updateShiftRegister();
    updateShiftRegister2();

    delay(4);
   }
}

// Espacio
void esp()
{
  for(int i = 0; i < 55; i++){
  
    ledv = B00000000;
    ledh = B11111110;
    updateShiftRegister();
    updateShiftRegister2();
    
    delay(4);
  }
}