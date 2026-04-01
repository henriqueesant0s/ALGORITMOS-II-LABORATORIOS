#include <stdio.h>

// Função que converte horas, minutos e segundos em segundos
int converte_segundos(int horas, int minutos, int segundos);

int main() {
    int h, m, s, total;

    printf("Digite as horas: ");
    scanf("%d", &h);

    printf("Digite os minutos: ");
    scanf("%d", &m);

    printf("Digite os segundos: ");
    scanf("%d", &s);

    if (h < 0 || m < 0 || s < 0) {
        printf("Os valores devem ser positivos!\n");
        return 0;
    }

    total = converte_segundos(h, m, s);

    printf("O total em segundos é: %d\n", total);

    return 0;
}

int converte_segundos(int horas, int minutos, int segundos) {
    return (horas * 3600) + (minutos * 60) + segundos;
}
