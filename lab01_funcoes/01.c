#include <stdio.h>

int dobro(int valor); //função principal do codigo, escopo.

int main(){

     int num;

     printf("DIgite um numero: ");
     scanf("%d", &num);
     printf("O dobro de %d eh %d.\n", num, dobro(num));
     

    return 0;
}

    int dobro(int valor) { //implemento da função dobro.

        return (2 * valor); //calculo do dobro.
    }