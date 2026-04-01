#include <stdio.h>

// Função que calcula x elevado a z
int potencia(int x, int z);

int main() {
    int base, expoente, resultado;

    printf("Digite a base (x): ");
    scanf("%d", &base);

    printf("Digite o expoente (z): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Este programa calcula apenas potências com expoente inteiro não negativo.\n");
        return 0;
    }

    resultado = potencia(base, expoente);

    printf("%d elevado a %d é: %d\n", base, expoente, resultado);

    return 0;
}

int potencia(int x, int z) {
    int resultado = 1;

    for (int i = 1; i <= z; i++) {
        resultado *= x; // multiplica x por ele mesmo z vezes
    }

    return resultado;
}
