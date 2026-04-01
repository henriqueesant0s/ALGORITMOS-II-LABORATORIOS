#include <stdio.h>

int main() {

    int a = 50;
    int b = 300;

    int *p1 = &a;
    int *p2 = &b;

    if (p1 > p2) {
        printf("O maior endereco eh: %p\n", (void*)p1);
    } else {
        printf("O maior endereco eh: %p\n", (void*)p2);
    }

    return 0;
}
