#include <stdio.h>
int main() {

    char NOME[100];
    float SALARIO_FIXO, TOTAL, TOTAL_VENDAS, COMICAO;

    printf("digite o nome do vendedor: \n");
    scanf("%s", &NOME);

    printf("digite o salario fixo do funcionario: \n");
    scanf("%f", &SALARIO_FIXO);

    printf("digite o valor do total de vendas\n");
    scanf("%f", &TOTAL_VENDAS);

    COMICAO = (TOTAL_VENDAS * 0.15);
    TOTAL = SALARIO_FIXO + COMICAO;

    printf("TOTAL = R$ %.2f", TOTAL);

    return 0;

}


// chaqr usado para nomes e delimitar a quatidade de caracteres.
// ALT Z QUEBRA LINHA SEM INTERROMPER O CODIGO