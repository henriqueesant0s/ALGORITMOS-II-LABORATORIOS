#include <stdio.h>

float consumo(float distancia, float litros);

int main() {
    float km, litros, resultado;

    printf("Digite a distância percorrida (Km): ");
    scanf("%f", &km);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Quantidade de litros inválida!\n");
        return 0;
    }

    resultado = consumo(km, litros);

    printf("Consumo médio: %.2f Km/l\n", resultado);

    if (resultado < 8)
        printf("Venda o carro!\n");
    else if (resultado >= 8 && resultado <= 14)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");

    return 0;
}

float consumo(float distancia, float litros) {
    return distancia / litros;
}
