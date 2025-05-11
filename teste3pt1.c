#include <stdio.h>
int main() {
int segundos, minutos, horas, entrada;


printf("digite os segundos do evento da fabrica\n");
scanf("%d", &entrada);

minutos = entrada/60;
horas = minutos /60;
segundos = minutos*60;

printf("%d:%d:%d", horas, minutos, segundos);



return 0;
}

//henrique lopes borges de souza ra 22506979