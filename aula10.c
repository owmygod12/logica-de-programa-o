#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

double A, B, C, PI, AREA_TRIANGULO, AREA_CIRCULO, AREA_TRAPEZIO, AREA_QUADRADO, AREA_RETANGULO;


printf("digite o valor de A , B  e C\n");
scanf("%lf %lf %lf",&A, &B, &C);

PI = 3.14159;


//formula
AREA_TRIANGULO = (A * C) / 2;

AREA_CIRCULO = PI * pow(C, 2);

AREA_TRAPEZIO = (A + B) * C /2;

AREA_QUADRADO = pow(B, 2);

AREA_RETANGULO = A * B;


printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf \nQUADRADO: %.3lf \nRETANGULO: %.3lf", AREA_TRIANGULO, AREA_CIRCULO, AREA_TRAPEZIO, AREA_QUADRADO, AREA_RETANGULO);

return 0;

} 