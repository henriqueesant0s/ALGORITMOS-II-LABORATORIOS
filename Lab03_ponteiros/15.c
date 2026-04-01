#include <stdio.h>
#include <math.h>

/*
Função que calcula as raízes de uma equação do 2º grau.
Retorna:
0 -> não existem raízes reais
1 -> existe uma raiz real
2 -> existem duas raízes reais e distintas
*/
int raizes(float A, float B, float C, float *X1, float *X2) {
    float delta;

    if (A == 0) {
        return 0;  // não é equação do segundo grau
    }

    delta = B * B - 4 * A * C;

    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *X1 = -B / (2 * A);
        *X2 = *X1;
        return 1;
    } else {
        *X1 = (-B + sqrt(delta)) / (2 * A);
        *X2 = (-B - sqrt(delta)) / (2 * A);
        return 2;
    }
}

int main() {
    float A, B, C;
    float X1, X2;
    int resultado;

    printf("Digite A: ");
    scanf("%f", &A);

    printf("Digite B: ");
    scanf("%f", &B);

    printf("Digite C: ");
    scanf("%f", &C);

    resultado = raizes(A, B, C, &X1, &X2);

    if (resultado == 0) {
        printf("\nNao existem raizes reais.\n");
    } else if (resultado == 1) {
        printf("\nExiste uma raiz real: X = %.2f\n", X1);
    } else {
        printf("\nExistem duas raizes reais:\n");
        printf("X1 = %.2f\n", X1);
        printf("X2 = %.2f\n", X2);
    }

    return 0;
}
