#include <stdio.h>
#include <stdlib.h>

int main() {
    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda1cent;
    double entrada;

    printf("Digite o valor que gostaria de sacar (ex: 123.45):\n");
    scanf("%lf", &entrada);

 
    int totalCentavos = (int)(entrada * 100);

    nota100 = totalCentavos / 10000;
    totalCentavos %= 10000;

    nota50 = totalCentavos / 5000;
    totalCentavos %= 5000;

    nota20 = totalCentavos / 2000;
    totalCentavos %= 2000;

    nota10 = totalCentavos / 1000;
    totalCentavos %= 1000;

    nota5 = totalCentavos / 500;
    totalCentavos %= 500;

    nota2 = totalCentavos / 200;
    totalCentavos %= 200;

    moeda1 = totalCentavos / 100;
    totalCentavos %= 100;

    moeda50 = totalCentavos / 50;
    totalCentavos %= 50;

    moeda25 = totalCentavos / 25;
    totalCentavos %= 25;

    moeda10 = totalCentavos / 10;
    totalCentavos %= 10;

    moeda5 = totalCentavos / 5;
    totalCentavos %= 5;

    moeda1cent = totalCentavos;

    printf("Decomposição do valor R$ %.2lf:\n", entrada);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d moeda(s) de R$ 1,00\n", moeda1);
    printf("%d moeda(s) de R$ 0,50\n", moeda50);
    printf("%d moeda(s) de R$ 0,25\n", moeda25);
    printf("%d moeda(s) de R$ 0,10\n", moeda10);
    printf("%d moeda(s) de R$ 0,05\n", moeda5);
    printf("%d moeda(s) de R$ 0,01\n", moeda1cent);

    return 0;
}

// nome henrique lopes borges de souza,  ra 22506979