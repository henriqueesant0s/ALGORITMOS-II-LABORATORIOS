#include <stdio.h>

// Função que imprime n linhas de exclamações
void desenha_exclamacoes(int n);

int main() {
    int n;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor inválido! Deve ser maior que zero.\n");
        return 0;
    }

    desenha_exclamacoes(n);

    return 0;
}

void desenha_exclamacoes(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("!");
        }
        printf("\n"); // quebra de linha após cada sequência
    }
}
