#include <stdio.h>
#include <stdlib.h>

int main() {
float preco;
int code, qnt;

printf("digite o codigo do produto e a quantidade: \n");
scanf("%d %d", &code, &qnt);


if (code == 1) {
preco = 4.00;

}else if (code == 2) {
preco = 4.50;

}else if (code == 3) {
preco = 5.00;

}else if (code == 4){
preco = 2.00;

}else if (code == 5) {
preco = 1.50;

}else {
    printf("codigo invalido\n");
}

preco = qnt * preco;

printf("total: R$%0.2f", preco);



return 0;


}