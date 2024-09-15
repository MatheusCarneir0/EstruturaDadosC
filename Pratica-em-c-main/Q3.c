#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int num_matri;
    float nota[3];
} Aluno;

int main() {
    Aluno alunos[5];
    float soma, media, maiorMedia = 0.0;
    int indiceMaiorMedia = 0;

    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; 

        printf("Numero de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].num_matri);

        soma = 0.0;
        for (int j = 0; j < 3; j++) {    
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i].nota[j]);
            soma += alunos[i].nota[j];
        }

        media = soma / 3.0;

        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }

        getchar(); 
    }

    printf("\nAluno com a maior média:\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Número de Matrícula: %d\n", alunos[indiceMaiorMedia].num_matri);
    for (int j = 0; j < 3; j++) {
        printf("Nota %d: %.2f\n", j + 1, alunos[indiceMaiorMedia].nota[j]);
    }

    return 0;
}
