#include <stdio.h>
#include <stdlib.h>

int main() {
    int lot[6], bilhete[6], acertos = 0;

    for (int i = 0; i < 6; i++) scanf("%d", &lot[i]);
    for (int i = 0; i < 6; i++) scanf("%d", &bilhete[i]);

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (bilhete[i] == lot[j]) acertos++;

    int *corretos = (int *) malloc(acertos * sizeof(int));
    int k = 0;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (bilhete[i] == lot[j])
                corretos[k++] = bilhete[i];

    for (int i = 0; i < acertos; i++)
        printf("%d ", corretos[i]);

    free(corretos);
    return 0;
}
