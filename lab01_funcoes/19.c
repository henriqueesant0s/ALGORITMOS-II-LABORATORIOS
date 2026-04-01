#include <stdio.h>

// Função que calcula o fatorial
int fatorial(int n);

int main() {
    int num, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido! Digite um valor positivo.\n");
        return 0;
    }

    resultado = fatorial(num);

    printf("O fatorial de %d é: %d\n", num, resultado);

    return 0;
}

int fatorial(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}
