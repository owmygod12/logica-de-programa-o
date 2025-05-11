#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
int inicio, fim;

printf("digite a hora de inicio e fim do jogo: \n");
scanf("%d %d", &inicio, &fim);



if (inicio > 12 && fim < 12) {
    printf("o jogo durou %d hora(s)\n", abs(abs(inicio-12)-(fim+12)));

}if (inicio==0 && fim==0 || inicio==fim) {
    printf("o jogo durou 24 hora(s)\n");



}if (inicio<12 && fim>12) {
    printf("o jogo durou %d hora (s)\n", abs(abs(inicio+12)-(fim+12)));
}


    return 0;
}