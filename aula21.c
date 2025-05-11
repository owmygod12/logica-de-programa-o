#include <stdio.h>
#include <stdlib.h>
#include <string.h> //compara strings junto ao comando srtcmp()


int main() {
char filo[20], classe[20], ordem[20];

printf("digite o filo, classe e ordem da especie desejada\n");
scanf("%s", &filo);
scanf("%s", &classe);
scanf("%s", &ordem);

if (strcmp(filo, "vertebrado") == 0) 
    if (strcmp(classe, "ave") == 0)
    if (strcmp(ordem, "carnivoro") == 0)
    printf("aguia\n");
        else
        printf("pombo\n");
        else
            if (strcmp(ordem, "onivoro") == 0) 
            printf("homem\n");
        else
        printf("vaca\n");
        else 
            if (strcmp(classe, "inseto") == 0)
            if (strcmp(ordem, "hematofago") == 0)
            printf("pulga\n");
        else
            printf("lagarta \n");

        else
            if (strcmp(ordem, "hematofago") == 0)
            printf("sanguesuga\n");
        else 
            printf("minhoca\n");







return 0;
}
