#include <stdio.h>

/* Função que recebe o endereço de A e o valor de B,
   soma A + B e armazena o resultado em A */
void somaEmA(int *A, int B) {
    *A = *A + B;
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    somaEmA(&A, B);

    printf("\nValor de A (A + B): %d", A);
    printf("\nValor de B: %d\n", B);

    return 0;
}
