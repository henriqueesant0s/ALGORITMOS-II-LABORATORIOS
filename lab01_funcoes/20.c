#include <stdio.h>

// Protótipos das funções
int eh_primo(int num);
int contar_primos(int n);

int main() {
    int n, quantidade;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 2) {
        printf("Não há números primos abaixo de %d.\n", n);
        return 0;
    }

    quantidade = contar_primos(n);

    printf("Quantidade de números primos abaixo de %d: %d\n", n, quantidade);

    return 0;
}

// Função que verifica se um número é primo
int eh_primo(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Função que conta quantos primos existem abaixo de n
int contar_primos(int n) {
    int contador = 0;
    for (int i = 2; i < n; i++) {
        if (eh_primo(i))
            contador++;
    }
    return contador;
}
