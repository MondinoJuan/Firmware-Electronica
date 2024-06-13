/*
TABLA DE CARACTERES
0b11001000, //11 00100 0, STOP STOP ESPACIO START
0b11010000, //11 01000 0, STOP STOP "CR" START
0b11000110, //11 00011 0, STOP STOP "A" START
0b11110010, //11 11001 0, STOP STOP "B" START
0b11011100, //11 01110 0, STOP STOP "C" START
0b11010010, //11 01001 0, STOP STOP "D" START
0b11000010, //11 00001 0, STOP STOP "E" START
0b11011010, //11 01101 0, STOP STOP "F" START
0b11110100, //11 11010 0, STOP STOP "G" START
0b11101000, //11 10100 0, STOP STOP "H" START
0b11001100, //11 00110 0, STOP STOP "I" START
0b11010110, //11 01011 0, STOP STOP "J" START
0b11011110, //11 01111 0, STOP STOP "K" START
0b11100100, //11 10010 0, STOP STOP "L" START
0b11111000, //11 11100 0, STOP STOP "M" START
0b11011000, //11 01100 0, STOP STOP "N" START
0b11110000, //11 11000 0, STOP STOP "O" START
0b11101100, //11 10110 0, STOP STOP "P" START
0b11101110, //11 10111 0, STOP STOP "Q" START
0b11010100, //11 01010 0, STOP STOP "R" START
0b11001010, //11 00101 0, STOP STOP "S" START
0b11100000, //11 10000 0, STOP STOP "T" START
0b11001110, //11 00111 0, STOP STOP "U" START
0b11111100, //11 11110 0, STOP STOP "V" START
0b11100110, //11 10011 0, STOP STOP "W" START
0b11111010, //11 11101 0, STOP STOP "X" START
0b11101010, //11 10101 0, STOP STOP "Y" START
0b11100010, //11 10001 0, STOP STOP "Z" START
0b11101101, //11 10110 1, STOP STOP "0" START
0b11101111, //11 10111 1, STOP STOP "1" START
0b11100111, //11 10011 1, STOP STOP "2" START
0b11000011, //11 00001 1, STOP STOP "3" START
0b11010101, //11 01010 1, STOP STOP "4" START
0b11100001, //11 10000 1, STOP STOP "5" START
0b11101011, //11 10101 1, STOP STOP "6" START
0b11001111, //11 00111 1, STOP STOP "7" START
0b11001101, //11 00110 1, STOP STOP "8" START
0b11110001, //11 11000 1, STOP STOP "9" START
0b11111001, //11 11100 1, STOP STOP "." START
 */

#define outputPin 12
   int i,j;     
   byte valor;
   byte const bitMask[8]={1,2,4,8,16,32,64,128};
   byte const ByteDatosSalida[43]={
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11000010, //11 00001 0, STOP STOP "E" START
      0b11100100, //11 10010 0, STOP STOP "L" START
      0b11000010, //11 00001 0, STOP STOP "E" START
      0b11011100, //11 01110 0, STOP STOP "C" START
      0b11100000, //11 10000 0, STOP STOP "T" START
      0b11110100, //11 11010 0, STOP STOP "G" START
      0b11101100, //11 10110 0, STOP STOP "P" START
      0b11100100, //11 10010 0, STOP STOP "L" START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11010100, //11 01010 0, STOP STOP "R" START
      0b11100000, //11 10000 0, STOP STOP "T" START
      0b11100000, //11 10000 0, STOP STOP "T" START
      0b11101010, //11 10101 0, STOP STOP "Y" START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START    
      0b11001010, //11 00101 0, STOP STOP "S" START
      0b11001110, //11 00111 0, STOP STOP "U" START
      0b11001010, //11 00101 0, STOP STOP "S" START
      0b11011100, //11 01110 0, STOP STOP "C" START
      0b11010100, //11 01010 0, STOP STOP "R" START
      0b11001100, //11 00110 0, STOP STOP "I" START
      0b11110010, //11 11001 0, STOP STOP "B" START
      0b11000010, //11 00001 0, STOP STOP "E" START
      0b11100000, //11 10000 0, STOP STOP "T" START
      0b11000010, //11 00001 0, STOP STOP "E" START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START  
      0b11000110, //11 00011 0, STOP STOP "A" START     
      0b11001000, //11 00100 0, STOP STOP ESPACIO START  
      0b11101010, //11 10101 0, STOP STOP "Y" START 
      0b11110000, //11 11000 0, STOP STOP "O" START 
      0b11001110, //11 00111 0, STOP STOP "U" START
      0b11100000, //11 10000 0, STOP STOP "T" START
      0b11001110, //11 00111 0, STOP STOP "U" START
      0b11110010, //11 11001 0, STOP STOP "B" START
      0b11000010, //11 00001 0, STOP STOP "E" START     
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000, //11 00100 0, STOP STOP ESPACIO START      
      0b11001000, //11 00100 0, STOP STOP ESPACIO START
      0b11001000};//11 00100 0, STOP STOP ESPACIO START
      
void setup(){
   pinMode(outputPin, OUTPUT);
}

void loop(){
   noTone(outputPin);
   delay(3000);                 //delay de repeticion 3s
   i=0;
   while(i<43){                 //cantidad de caracteres 18
      valor=ByteDatosSalida[i]; //carga valor con dato de salida
      for(j=0;j<8;j++){         //recorre los 8 bit del baudot
         delay(21);             //Delay de 22ms (se usa 21 para contemplar demora de firmware)
         if(valor&bitMask[j])   //aplica la mascara
            tone(outputPin,970);//si es verdadero envia 970Hz
         else
            tone(outputPin,800);//si es falso envia 800Hz
      }i++; 
   }
}
