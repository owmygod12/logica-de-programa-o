#include <stdio.h>
#include <stdlib.h>
int main() {

float A, B, C, MEDIA;

printf("digite o a nota dos alunos\n");
scanf("%f %f %f", &A, &B, &C);

MEDIA = (A * 2) + (3*B) + (5 * C);
MEDIA = MEDIA / 10;

printf("MEDIA = %.1f", MEDIA);
return 0;

}