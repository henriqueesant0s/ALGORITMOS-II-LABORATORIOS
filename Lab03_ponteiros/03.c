#include <stdio.h>

int main() {

    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (&a > &b) {
        printf("Maior endereco: %p\n", (void*)&a);
        printf("Conteudo do maior endereco: %d\n", a);
    } else {
        printf("Maior endereco: %p\n", (void*)&b);
        printf("Conteudo do maior endereco: %d\n", b);
    }

    return 0;
}
