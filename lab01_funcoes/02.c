#include <stdio.h>

int main(){

    int dia, mes, ano;
    printf("DIgite uma data no formato DD MM AAA: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    imprime_data(dia, mes, ano);
    return 0;
}

void imprime_data(int dia, int mes, int ano) // utilizado void pois quero tratar nenhum dado, apenas imprimir
{
    char meses[12][20] = { //vetor dos meses
    "Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
    };

    printf("%d de %s de %d\n", dia, meses[mes-1], ano); //impressão para o usuario.
}