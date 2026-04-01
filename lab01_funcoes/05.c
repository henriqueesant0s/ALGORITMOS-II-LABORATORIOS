#include <stdio.h>

float volume(float num); //iniciliazação da função.

int main(){

    float num, resultado; //inicilização da variaveis.
 
    printf("Digite o raio da esfera: ");
    scanf("%f", &num);

    resultado = volume(num); 

    printf("O volume da esfera eh: %.2f\n", resultado); //impressão para o usuario.

    return 0;
}
    float volume(float num) {
        const float PI = 3.14159; //declaração de uma função const para que o valor de PI não seja alterado.
        return (4.0 / 3.0) * PI * (num * num * num); //formula calculo de volume de uma esfera.
    }