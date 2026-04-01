#include <stdio.h>

int main () {

    int a = 10;
    float b = 22.5; //declarando valores aleatorios para testa.
    char c = 'u' ;

    int *x = &a;
    float *y = &b; //alocando os ponteiros a variaveis iniciadas em cima.
    char *z = &c;

    printf("a = %d, b = %.2f, c = %c \n", a, b, c); //impressão dos valores iniciais.
    *x = 20;
    *y = 10.5; //alteração dos valores declarados no começo do codigo.
    *z = 'f';

    printf("a = %d, b = %.2f, c = %c \n", a, b, c); //impressão dos valores modificados.


    return 0;
}