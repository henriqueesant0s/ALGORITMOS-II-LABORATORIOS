#include <stdio.h>

float operacao(float num1, float num2, char simbolo);

int main() {
    float a, b, resultado;
    char op;

    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);  // espaço antes de %c evita ler o ENTER anterior

    resultado = operacao(a, b, op);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}

float operacao(float num1, float num2, char simbolo) {
    switch (simbolo) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else {
                printf("Erro: divisão por zero!\n");
                return 0;
            }
        default:
            printf("Símbolo inválido!\n");
            return 0;
    }
}
