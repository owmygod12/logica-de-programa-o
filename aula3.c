#include <stdio.h>

int main() {
    float area, raio;
    float n = 3.14159;
    //raio2 = raio * raio;


    printf("digite o valor do raio da circunferencia\n");
    scanf("%f", &raio);

    area = raio * raio * n;

    printf("o valor da area e igual a %.4lf centimetros\n", area);
    return 0;
}

// sucesso corrigido em casa
