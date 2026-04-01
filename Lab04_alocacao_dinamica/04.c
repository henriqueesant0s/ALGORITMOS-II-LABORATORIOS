#include <stdio.h>
#include <stdlib.h>

char *alocaString(int n) {
    return (char *) malloc(n * sizeof(char));
}

int main() {
    int n;
    scanf("%d", &n);

    char *s = alocaString(n + 1);
    scanf(" %[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
              s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
            printf("%c", s[i]);
    }

    free(s);
    return 0;
}
