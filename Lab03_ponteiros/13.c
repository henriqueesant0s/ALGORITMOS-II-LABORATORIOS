#include <stdio.h>

#define PI 3.141592

/* Função que calcula a área da superfície e o volume da esfera */
void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * PI * R * R;
    *volume = (4.0 / 3.0) * PI * R * R * R;
}

int main() {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("\nArea da superficie: %.2f", area);
    printf("\nVolume da esfera: %.2f\n", volume);

    return 0;
}
