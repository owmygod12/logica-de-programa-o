#include <stdio.h>

int main() {
int CODIGO1, CODIGO2, QUANTIDADE1, QUANTIDADE2;
float VALOR1, VALOR2, TOTAL;



printf("produto 1 digite: o cogigo, quantidade e valor\n");
scanf("%d %d %f", &CODIGO1, &QUANTIDADE1, &VALOR1);

printf("produto 2 digite: o cogigo, quantidade e valor\n");
scanf("%d %d %f", &CODIGO2, &QUANTIDADE2, &VALOR2);



VALOR1 = VALOR1 * QUANTIDADE1;
VALOR2 = VALOR2 * QUANTIDADE2;
TOTAL = VALOR1 + VALOR2;


printf("VALOR A PAGAR = R$ %.2f", TOTAL);

return 0;





}