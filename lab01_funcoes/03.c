#include <stdio.h>

int verificador(int num); //função de verificação.

int main() {
    int num, resultado; //inicialização.

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resultado = verificador(num); //para inicializar a variavel verificador(num) o num é o numero digitado pelo usuario.

    printf("O resultado foi: %d\n", resultado); //impressão da variavel resultado.

    return 0;
}

int verificador(int num) { //implemento da função verificador, mas a variavel de tipo inteiro num.
    if (num > 0) 
        return 1; //retorna 1 para numero positivo.
    else if (num < 0)
        return -1; //retorna -1 para numero negativo.
    else
        return 0; //retorna 0 para numero igual a 0.
}
