#include <stdio.h>

/* Função que lê duas notas válidas e retorna por parâmetro */
void ler_notas(float *n1, float *n2) {
    do {
        printf("Digite a primeira nota (0 a 10): ");
        scanf("%f", n1);
    } while (*n1 < 0 || *n1 > 10);

    do {
        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", n2);
    } while (*n2 < 0 || *n2 > 10);
}

/* Função que calcula a média simples e a média ponderada */
void calcula_medias(float n1, float n2, float *media_simples, float *media_ponderada) {
    *media_simples = (n1 + n2) / 2;
    *media_ponderada = (n1 + n2 * 2) / 3;
}

int main() {
    float nota1, nota2;
    float mediaS, mediaP;

    ler_notas(&nota1, &nota2);

    calcula_medias(nota1, nota2, &mediaS, &mediaP);

    printf("\nNota 1: %.2f", nota1);
    printf("\nNota 2: %.2f", nota2);
    printf("\nMedia simples: %.2f", mediaS);
    printf("\nMedia ponderada: %.2f\n", mediaP);

    return 0;
}
