#include <stdio.h>
int main() {
    int A, B, X;    

    //scanf("%d %d", &A, &B); estava pedindo os mumeros antes de exibir a mensagem
    // ou soma = A + B

    printf("digite o primeiro numero:\n");
    scanf("%d", &A);

    printf("digite o segundo numero:\n");
    scanf("%d", &B);

    X = A + B;

    printf("o resultado da soma de %d e %d e = %d\n",A, B, X);
    // printf("X = %d\n", X) para ser igual o exercicio 2
    return 0;


}



//tudo o que estiver laranja vai sair no terminal!
//cntrl b fecha aba lateral
// int igual a declaraçao de variaveis