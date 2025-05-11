#include <stdio.h>
#include <stdlib.h>

int main() {
double n1, n2, n3, n4, media, mediafinal, prova = 0.0;
int valoreslidos;

printf("digite as notas das provas: \n");
valoreslidos = scanf("%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &prova);

media = (n1*2 + n2*3 + n3*4 + n4*1) /10;

if (media >= 7.0) {
    printf("media: %.1lf\naluno aprovado.\n", media);

}else if (media >= 5.0  && media <= 6.9) {
    printf("media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n", media, prova);

    if(valoreslidos == 5) {
        printf("Nota do exame: %.1lf\n", prova);
    }else {
        printf(" ");
        prova =0.0;
    }

    mediafinal = (media + prova)/2;

    if (mediafinal >= 5.0) {
        printf("Aluno aprovado.\nFinal de media: %.1lf\n", mediafinal );

    }else {

        printf("aluno reprovado.\nFinal de media: %.1lf\n", mediafinal );
    }
}else {
    printf("media: %.1lf\nAluno reprovado\n", media);
}

return 0;
}

//henrique lopes borges de souza ra 22506979