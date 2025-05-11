#include <stdio.h>

int main() {
float numero;


printf("digite o numero: ");
scanf("%f", &numero);

if (numero > 0 && numero < 25) {
printf("Intervalo [0,25]\n");

}

else if (numero > 25 && numero < 50)
{
    printf("Intervalo (25,50]\n");
}

else if (numero > 50 && numero < 75)
{
    printf("Intervalo (50,75]\n");
}

else if (numero > 75 && numero < 100)
{
    printf("intervalo (75,100]\n");
}

else {
    printf("fora de intervalo");
}

return 0;
}