#include <stdio.h>

/* Função que recebe dois endereços de inteiros
   e garante que o maior fique no primeiro
   e o menor no segundo */
void organiza(int *a, int *b) {
    int aux;

    if (*a < *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main() {
    int x, y;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &x);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &y);

    organiza(&x, &y);

    printf("\nPrimeira variavel (maior valor): %d", x);
    printf("\nSegunda variavel (menor valor): %d\n", y);

    return 0;
}
