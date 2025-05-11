#include <stdio.h>

int main() {

int dias, meses, anos, entrada;

printf("digite a idade em dias: ");
scanf("%d", &entrada);

anos = entrada/365;
meses = (entrada - anos*365)/30;
dias = ((entrada - anos*365)- meses*30);

printf("%d ano(s)\n %d mes(es)\n %d dia(s)\n", anos, meses, dias);



return 0;
}