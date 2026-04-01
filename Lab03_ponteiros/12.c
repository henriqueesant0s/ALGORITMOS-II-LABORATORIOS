#include <stdio.h>

/* Função que separa a parte inteira e a parte fracionária */
void frac(float num, int *inteiro, float *fracionaria) {
    *inteiro = (int) num;
    *fracionaria = num - *inteiro;
}

int main() {
    float numero, parteFrac;
    int parteInt;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    frac(numero, &parteInt, &parteFrac);

    printf("\nParte inteira: %d", parteInt);
    printf("\nParte fracionaria: %.2f\n", parteFrac);

    return 0;
}
