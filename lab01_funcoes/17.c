#include <stdio.h>

int soma_entre(int num1, int num2);

int main() {
    int a, b, resultado;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Os números devem ser positivos!\n");
        return 0;
    }

    resultado = soma_entre(a, b);

    printf("A soma dos números inteiros entre %d e %d é: %d\n", a, b, resultado);

    return 0;
}

int soma_entre(int num1, int num2) {
    int soma = 0;

    // garante que num1 seja o menor
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // soma os números entre num1 e num2 (excluindo os próprios)
    for (int i = num1 + 1; i < num2; i++) {
        soma += i;
    }

    return soma;
}
