#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
double RAIO, PI, TOTAL;

PI = 3.14159;


printf("digite o valor do raio da esfera: \n");
scanf("%lf",&RAIO);

RAIO = pow(RAIO, 3);
TOTAL = (4.0/3) * PI * RAIO;

printf("VOLUME = %.3lf", TOTAL);

return 0;

}
// Henrique lopes borges de souza  ra; 22506979