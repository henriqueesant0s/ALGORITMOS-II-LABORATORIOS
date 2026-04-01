#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nEnderecos das posicoes com valores pares:\n");
    for (i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Posicao %d -> Endereco: %p\n", i, &vetor[i]);
        }
    }

    return 0;
}
