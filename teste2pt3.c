#include <stdio.h>
#include <stdlib.h>

int main() {
int X, Y, DISTANCIA, MINUTOS;

Y = 90;
X = 60;

printf("digite a distancia entre os carros: \n");
scanf("%d",&DISTANCIA);

double TEMPO;
TEMPO = (double)DISTANCIA / (Y - X);
// sempre usar double quando for fazer divisao 
MINUTOS =  60*TEMPO;

printf("%d minutos\n", MINUTOS);

return 0;

}

// Henrique lopes borges de souza  ra; 22506979