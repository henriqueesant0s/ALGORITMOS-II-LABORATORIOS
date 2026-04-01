#include <stdio.h>

float volume(float raio, float altura); //inicialização da função.
const double PI = 3.141592; //declarando o valor de PI como "const", para que o valor não se altere e "double" para armazenar numeros reais com casas decimais
int main(){

    float raio, altura, resultado;

    printf("Digite o raio e a altura para calcular o volume: ");
    scanf("%f %f", &raio, &altura); //leitura do usuario

    resultado = volume(raio, altura); //para facilitar impressão 

    printf("O volume eh: %.2f", resultado); //impressão para o usuario

    return 0;
} 

float volume(float raio, float altura) {

    return (PI * raio * raio * altura); //formula do volume do cilindro.
}