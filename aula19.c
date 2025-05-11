#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
double A, B, C;
double a, b, c;

printf("digite o valor de a b e c\n");
scanf("%lf %lf %lf", &a, &b, &c);
//


if (A<0||B<0||C<0)  {

    return 0;
}
if (A>=B&&A>=C) {
    A=a;
    B=b;
    C=c;

}else if (B>A&&B>=C) {
    A=b;
    B=a;
    C=c;

}else if (C>A&&C>B) {
    A=c;
    B=a;
    C=b;
}
//calculo

if (a >= (b+c)) {
    printf("noa forma triangulo");

}   else if ((A*A) == ((B*B) + (C*C))) {
        printf("triangulo retangulo\n");

}   else if ((A*A) == ((B*B) + (C*C))) {
        printf("triangulo obtusangulo\n");

        if ((A==B||B==C||C==A)&&(A!=B||B!=C||C!=A)) {
            printf("triangulo isosceles\n");
    }   
}else if ((A*A) < ((B*B) + (C*C))) {
    printf("triangulo acutangulo\n");

    if ((A==B||B==C||C==A)&&(A!=B||B!=C||C!=A)) {
        printf("triangulo isosceles\n");
    }
    if (A==B && B==C) {
        printf("triangulo equilatero\n");
    }
}

return 0;    
}