#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = NULL, x, n = 0;

    while (1) {
        scanf("%d", &x);
        if (x < 0) break;

        v = (int *) realloc(v, (n + 1) * sizeof(int));
        v[n++] = x;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}
