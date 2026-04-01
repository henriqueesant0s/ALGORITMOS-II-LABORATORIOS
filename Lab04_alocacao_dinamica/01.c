#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p = (int*) malloc(5 * sizeof(int));
    
    for(int i=0;i<5;i++) {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &p[i]);

    }
    for(int i=0;i<5;i++) {
        printf("%d \n", p[i]);
    }
    free(p);


    return 0;
}