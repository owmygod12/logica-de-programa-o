#include <stdio.h>

int main() {
float A, B, PROD;

printf("digite o primeiro numero\n");
scanf("%f", &A);

printf("digite o segundo numero\n");
scanf("%f", &B);

PROD = A * B;

printf("PROD = %.0f", PROD);
return 0;
}