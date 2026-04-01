#include <stdio.h>

void alteravalores(int *a, int *b);

int main() {

    int a;
    int b;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);

    printf("Digite um valor inteiro: ");
    scanf("%d", &b);

    alteravalores(&a, &b);

    printf("Valores alterados: A = %d, B = %d\n", a, b);

    return 0;
}

void alteravalores(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
