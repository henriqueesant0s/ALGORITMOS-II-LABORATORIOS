#include <stdio.h>

// Funções
int forma_triangulo(float a, float b, float c);
void tipo_triangulo(float a, float b, float c);

int main() {
    float lado1, lado2, lado3;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Os lados devem ser maiores que zero!\n");
        return 0;
    }

    if (forma_triangulo(lado1, lado2, lado3)) {
        tipo_triangulo(lado1, lado2, lado3);
    } else {
        printf("Os valores informados não formam um triângulo.\n");
    }

    return 0;
}

// Verifica se os lados formam um triângulo
int forma_triangulo(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b)
        return 1; // Verdadeiro
    else
        return 0; // Falso
}

// Determina o tipo de triângulo
void tipo_triangulo(float a, float b, float c) {
    if (a == b && b == c)
        printf("Triângulo equilátero.\n");
    else if (a == b || a == c || b == c)
        printf("Triângulo isósceles.\n");
    else
        printf("Triângulo escaleno.\n");
}
