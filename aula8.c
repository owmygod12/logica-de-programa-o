#include <stdio.h>

int main() {
int NUMERO, HORAS;
float SALARIO_HORA , SALARIO_MES;

printf("digite o numero do funcionario: \n");
scanf("%d", &NUMERO);

printf("digite a quantidade de horas trabalhadas: \n");
scanf("%d", &HORAS);

printf("digite o valor do salario por hora: \n");
scanf("%f", &SALARIO_HORA);

SALARIO_MES = HORAS * SALARIO_HORA;

printf("NUMERO = %d\n", NUMERO );
printf("SALARIO = U$ %.2f", SALARIO_MES);

return 0;

}