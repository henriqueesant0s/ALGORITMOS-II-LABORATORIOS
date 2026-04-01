#include <stdio.h>
#include <math.h>


float hipotenusa(float a, float b);
float resultado;

int main (){

    float a,b;
    float resultado;

    printf("Digite os valores: ");
    scanf("%f %f", &a, &b);

    resultado = hipotenusa(a,b);

    printf("A hipotenusa de eh: %.2f", resultado);

    return 0;
}
    float hipotenusa(float a, float b) {

        return (sqrt( a * a + b * b));
    }