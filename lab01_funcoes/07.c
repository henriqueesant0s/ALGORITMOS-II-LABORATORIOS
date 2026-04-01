#include <stdio.h>

// Função que converte Celsius para Fahrenheit
float converteParaFahrenheit(float celsius) {
    float fahrenheit;
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    return fahrenheit;
}

int main() {
    float celsius, resultado;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    resultado = converteParaFahrenheit(celsius);

    printf("A temperatura em Fahrenheit é: %.2f\n", resultado);

    return 0;
}
