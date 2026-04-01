#include <stdio.h>
#include <stdlib.h>

int main() {
    int bytes;
    scanf("%d", &bytes);

    int tam = bytes / sizeof(int);
    int *mem = (int *) calloc(tam, sizeof(int));

    int opcao, pos, valor;

    do {
        printf("1-Inserir  2-Consultar  0-Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            scanf("%d %d", &pos, &valor);
            if (pos >= 0 && pos < tam) mem[pos] = valor;
        } else if (opcao == 2) {
            scanf("%d", &pos);
            if (pos >= 0 && pos < tam)
                printf("%d\n", mem[pos]);
        }
    } while (opcao != 0);

    free(mem);
    return 0;
}
