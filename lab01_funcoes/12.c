#include <stdio.h>

int soma_algarismos(int num);

int main() {
    int numero, resultado;

    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido\n");
    } else {
        resultado = soma_algarismos(numero);
        printf("A soma dos algarismos é: %d\n", resultado);
    }

    return 0;
}

int soma_algarismos(int num) {
    int soma = 0;

    while (num > 0) {
        soma += num % 10;  // pega o último algarismo
        num /= 10;         // remove o último algarismo
    }

    return soma;
}
