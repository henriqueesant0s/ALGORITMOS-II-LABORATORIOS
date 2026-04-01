#include <stdio.h>

/* Função que recebe os endereços de A e B,
   dobra os valores originais e retorna a soma */
int somaDobro(int *a, int *b) {
    *a = (*a) * 2;
    *b = (*b) * 2;

    return *a + *b;
}

int main() {
    int A, B, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    resultado = somaDobro(&A, &B);

    printf("\nDobro de A: %d", A);
    printf("\nDobro de B: %d", B);
    printf("\nSoma dos dobros: %d\n", resultado);

    return 0;
}
