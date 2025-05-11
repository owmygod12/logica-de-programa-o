#include <stdio.h>

int main() {
float A, B, SOMA;

printf("digite o priomeiro valor\n");
scanf("%f", &A);

printf("digite o segundo valor\n");
scanf("%f", &B);

SOMA = A + B;

printf("SOMA = %.0f\n", SOMA);
return 0;

}

//quando quiser que o codigo aceite e imprima resultado negativo tire o & do soma