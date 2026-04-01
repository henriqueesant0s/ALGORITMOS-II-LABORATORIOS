#include <stdio.h>

int maior(int num1, int num2);

int main(){

    int num1, num2, resultado;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    resultado = maior(num1, num2);

    printf("O maior numero eh: %d", resultado);


    return 0;
}
    int maior(int num1, int num2){

        if (num1 > num2) {
            return (num1);
        } else if (num2 > num1) {
            return (num2);
        } else {
            return num1;
        }
    }