#include <stdio.h>
#include <math.h>

int main() {
double salario, imposto;

printf("digite o valor do seu salario\n");
scanf("%lf", &salario);

if (salario >0 && salario <= 2000)
{printf("isento de inposto de renda\n");    
}

else if (salario > 2000 && salario < 3000)
{
    imposto = salario*0.08;
    printf("o valor do imposto e: R$ %.2lf\n", imposto);
}

else if (salario == 3002.00)
{
salario = salario - 2002;
imposto = salario*0.08 + 2*0.18;  

printf("imposto = R$ %.2lf\n", imposto);
}

else if (salario > 3000 && salario < 4500)
{  
    imposto = salario*0.18;
    printf("o valor do imposto e: R$ %.2lf\n", imposto);
}

else if (salario > 4500)
{
    imposto = salario*0.28;
    printf("o valor do imposto e: R$ %.2lf\n", imposto);
}

else if (salario == 0)
{
    printf("voce é pobre\n");
}




return 0;
}