#include <stdio.h>
#include "mstring.h"

int main() {

    char texto[200];
    char copia[200];

    printf("Digite uma string: ");
    fgets(texto, 200, stdin);

    printf("\nTamanho: %d\n", mstrlen(texto));

    mstrcpy(copia, texto);
    printf("Copia: %s", copia);

    mstrcat(copia, " + teste");
    printf("Concatenado: %s\n", copia);

    printf("Comparando texto com copia: %d\n", mstrcmp(texto, copia));

    mstrupper(texto);
    printf("Maiusculo: %s", texto);

    mstrlower(texto);
    printf("Minusculo: %s", texto);

    printf("Vogais: %d\n", mcount_vogais(texto));

    printf("Eh palindromo? %d\n", meh_palindromo(texto));

    mremove_espacos(texto);
    printf("Sem espacos: %s\n", texto);

    return 0;
}
