#include <stdio.h>

// Função que desenha o triângulo com base 2*n - 1
void triangulo_base(int n);

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor inválido! Deve ser maior que zero.\n");
        return 0;
    }

    triangulo_base(n);

    return 0;
}

void triangulo_base(int n) {
    for (int i = 1; i <= n; i++) {
        // Espaços à esquerda (para centralizar o triângulo)
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Asteriscos (1, 3, 5, 7, ...)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}
