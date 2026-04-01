#include <stdio.h>

// Função que desenha o triângulo lateral
void triangulo_lateral(int n);

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor inválido! Deve ser maior que zero.\n");
        return 0;
    }

    triangulo_lateral(n);

    return 0;
}

void triangulo_lateral(int n) {
    // Parte crescente
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Parte decrescente
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
