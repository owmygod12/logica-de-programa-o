#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
int nota100, nota50, nota20, nota10, nota5, nota2, nota1, entrada;

printf("digite o valor que gostaria de sacar:\n");
scanf("%d", &entrada);


nota100 = entrada/100;
nota50 = (entrada - nota100*100)/50;
nota20 = ((entrada - nota100*100) - nota50*50)/20;
nota10 = (((entrada - nota100*100)- nota50*50)- nota20*20)/10;
nota5 = ((((entrada - nota100*100)- nota50*50)- nota20*20)- nota10 * 10)/5;
nota2 = (((((entrada - nota100*100)- nota50*50)- nota20*20)- nota10 * 10)- nota5*5)/2;
nota1 = ((((((entrada - nota100*100)- nota50*50)- nota20*20)- nota10 * 10) - nota5*5)- nota2 *2);


if (entrada <= 0)
{
   printf("esse valor nao e aceito ");
}




printf("%d\n %d notas de R$ 100,00\n %d notas de R$ 50,00\n %d notas de R$ 20,00\n %d notas de R$ 10,00\n %d notas de R$ 5,00\n %d notas de R$ 2,00\n %d notas de R$ 1,00\n",entrada,  nota100, nota50, nota20, nota10, nota5, nota2, nota1);



return 0;


}


/*#include <stdio.h>

void decomporSaque(int valor) {
    // Definindo as notas disponíveis no caixa eletrônico
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int i, qtdNotas;

    // Iterando sobre as notas disponíveis
    for (i = 0; i < 7; i++) {
        // Calculando a quantidade de notas para o valor atual
        qtdNotas = valor / notas[i];
        if (qtdNotas > 0) {
            // Imprimindo a quantidade de notas de determinado valor
            printf("%d nota(s) de R$ %d\n", qtdNotas, notas[i]);
        }
        // Atualizando o valor restante
        valor %= notas[i];
    }

    // Caso o valor tenha sido totalmente decomposto, ele será 0
    if (valor > 0) {
        printf("Não foi possível decompor todo o valor.\n");
    }
}

int main() {
    int valor;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor inválido para saque!\n");
    } else {
        printf("Decomposição do saque de R$ %d:\n", valor);
        decomporSaque(valor);
    }

    return 0;
}*/