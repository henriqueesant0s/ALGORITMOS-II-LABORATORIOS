#include <stdio.h>

int quadrado(int num); //função do quadrado do numero.

int main () {

    int num, resultado; //declarado "num" para o for digitado pelo usuario e "resultado" para inicilizar a função quadrado.

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resultado = quadrado(num); //inicilização da função.

    printf("O quadrado perfeito do numero %d eh: %d", num, resultado);

    return 0;
}
    int quadrado(int num) { //implemento da função.
        return(num * num); //faz o quadrado do numero digitado pelo usuario.
    }