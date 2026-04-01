#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

int main() {
    int N;
    scanf("%d", &N);

    Produto *p = (Produto *) malloc(N * sizeof(Produto));

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d %f",
              &p[i].codigo,
              p[i].nome,
              &p[i].quantidade,
              &p[i].preco);
    }

    int idxPreco = 0, idxQtd = 0;

    for (int i = 1; i < N; i++) {
        if (p[i].preco > p[idxPreco].preco) idxPreco = i;
        if (p[i].quantidade > p[idxQtd].quantidade) idxQtd = i;
    }

    printf("Maior preco: %s\n", p[idxPreco].nome);
    printf("Maior quantidade: %s\n", p[idxQtd].nome);

    free(p);
    return 0;
}
