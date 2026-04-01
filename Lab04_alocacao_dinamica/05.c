#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, cont = 0;
    scanf("%d", &N);

    int *v = (int *) malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        scanf("%d", &v[i]);

    scanf("%d", &X);

    for (int i = 0; i < N; i++)
        if (v[i] % X == 0) cont++;

    printf("Multiplos: %d\n", cont);

    free(v);
    return 0;
}
