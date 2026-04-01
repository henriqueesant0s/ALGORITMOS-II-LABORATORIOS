#include <stdio.h>

float media(float nota1, float nota2, float nota3, char opcao);

int main() {
    float nota1, nota2, nota3, resultado;
    char letra;
    
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite 'A' para media aritmetica ou 'P' para ponderada: ");
    scanf(" %c", &letra);

    resultado = media(nota1, nota2, nota3, letra);

    printf("A media do aluno eh: %.2f\n", resultado);

    return 0;
}

float media(float nota1, float nota2, float nota3, char opcao) {
    float media;

    if (opcao == 'A' || opcao == 'a') {
        media = (nota1 + nota2 + nota3) / 3;
    } 
    else if (opcao == 'P' || opcao == 'p') {
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } 
    else {
        printf("Tipo invalido! use 'A' ou 'P'.\n");
        media = 0;
    }

    return media;
}
