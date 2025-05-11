#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {


double DISTANCIA, X1, X2, Y1, Y2;

printf("digite as cordenadas do primeiro plano\n");
scanf("%lf %lf", &X1, &Y1);

printf("digite as coordenadas do segundo plano\n");
scanf("%lf %lf", &X2, &Y2);

DISTANCIA = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));


printf("%.4lf", DISTANCIA);

return 0;
}