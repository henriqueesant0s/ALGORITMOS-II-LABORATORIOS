#include <stdio.h>
#include <string.h>
#include "pessoa.h"

// Função que cria uma pessoa e retorna a struct
Pessoa criarPessoa(char nome[], int idade) {
    Pessoa p;
    strcpy(p.nome, nome); // copia o nome para a struct
    p.idade = idade;      // atribui a idade
    return p;             // retorna a struct
}

// Função que mostra os dados da pessoa
void mostrarPessoa(Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}
