#include <stdio.h>

int main() {
    int vetor[5];
    int *p = vetor;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nDobro dos valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i) * 2);
    }

    return 0;
}
