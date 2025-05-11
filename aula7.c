#include <stdio.h>

int main() {
float A, B, C, D, DIFERENCA;

    printf("digite o primeiro valor\n");
    scanf("%f", &A);

    printf("digite o segundo valor\n");
    scanf("%f", &B);

    printf("digite o terceiro valor\n");
    scanf("%f", &C);

    printf("digite o quarto valor\n");
    scanf("%f", &D);

    DIFERENCA = (A*B) - (C*D);

    printf("DIFERENCA = %1.f ", DIFERENCA);

return 0;

}