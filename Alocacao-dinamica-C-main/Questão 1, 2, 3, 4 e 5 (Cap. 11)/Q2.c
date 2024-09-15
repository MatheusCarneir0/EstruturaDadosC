#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;          
    char nome[50];          
    float notas[3];         
};

int main() {
    printf("Tamanho da estrutura Aluno: %lu bytes\n", sizeof(struct Aluno));

    return 0;
}
