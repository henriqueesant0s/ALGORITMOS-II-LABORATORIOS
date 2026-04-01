#include <stdio.h>

// Função que desenha uma linha com "="
void desenha_linha(int quantidade);

int main() {
    int n;

    printf("Digite a quantidade de sinais de igual: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Valor inválido! Deve ser maior que zero.\n");
        return 0;
    }

    desenha_linha(n);

    return 0;
}

void desenha_linha(int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("=");
    }
    printf("\n"); // quebra de linha no final
}
