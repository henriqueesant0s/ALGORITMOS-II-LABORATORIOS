#include <stdio.h>
#include "mstring.h"

// Conta quantos caracteres tem na string
int mstrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Copia uma string para outra
void mstrcpy(char dest[], char orig[]) {
    int i = 0;
    while (orig[i] != '\0') {
        dest[i] = orig[i];
        i++;
    }
    dest[i] = '\0';
}

// Junta duas strings
void mstrcat(char dest[], char orig[]) {
    int i = 0;
    int j = 0;

    // acha o final da dest
    while (dest[i] != '\0') {
        i++;
    }

    // copia a orig no final
    while (orig[j] != '\0') {
        dest[i] = orig[j];
        i++;
        j++;
    }

    dest[i] = '\0';
}

// Compara duas strings
int mstrcmp(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return a[i] - b[i];
        }
        i++;
    }

    return a[i] - b[i];
}

// Coloca a string em MAIÚSCULO
void mstrupper(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        i++;
    }
}

// Coloca em minúsculo
void mstrlower(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }
}

// Conta vogais (a, e, i, o, u)
int mcount_vogais(char s[]) {
    int i = 0, cont = 0;

    while (s[i] != '\0') {
        char c = s[i];

        // garante minúsculo
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            cont++;
        }

        i++;
    }

    return cont;
}

// Verifica se a string é palíndromo
int meh_palindromo(char s[]) {
    int inicio = 0;
    int fim = mstrlen(s) - 1;

    // tira o \n se existir
    if (s[fim] == '\n') {
        fim--;
    }

    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

// Remove espaços deslocando para a esquerda
void mremove_espacos(char s[]) {
    int i = 0, j = 0;

    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }

    s[j] = '\0';
}
