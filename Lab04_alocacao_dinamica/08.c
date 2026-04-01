#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v = (int *) calloc(1500, sizeof(int));
    int zeros = 0;

    for (int i = 0; i < 1500; i++)
        if (v[i] == 0) zeros++;

    for (int i = 0; i < 1500; i++)
        v[i] = i;

    for (int i = 0; i < 10; i++)
        printf("%d ", v[i]);

    for (int i = 1490; i < 1500; i++)
        printf("%d ", v[i]);

    free(v);
    return 0;
}
