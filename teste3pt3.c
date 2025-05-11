#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os valores de a, b e c na mesma linha (separados por espaço):\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3) { // Aceita números separados por espaços
        printf("Erro na entrada. Certifique-se de digitar três números separados por espaço.\n");
        return 1;
    }

    // Calcula o delta
    float delta = (b * b) - (4 * a * c);

    // Verifica se é possível calcular
    if (a == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        // Calcula as raízes
        float r1 = (-b + sqrt(delta)) / (2 * a);
        float r2 = (-b - sqrt(delta)) / (2 * a);

        // Imprime os resultados
        printf("r1 = %.5f\n", r1);
        printf("r2 = %.5f\n", r2);
    }

    return 0;
}

// henrique lopes borges de souza ra 22506979