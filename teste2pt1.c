#include <stdio.h>
#include <stdlib.h>


int main() {

int X;
float Y, TOTAL;

printf("escreva a distancia total percorrida\n");
scanf("%d",&X);

printf("digite o total de combustivel gasto em litros: \n");
scanf("%f",&Y);

TOTAL = X / Y;

printf("%.3f km/l", TOTAL);


return 0;




}

// Henrique lopes borges de souza  ra; 22506979