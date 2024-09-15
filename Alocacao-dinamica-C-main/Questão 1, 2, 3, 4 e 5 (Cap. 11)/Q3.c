#include <stdio.h>
#include <stdlib.h>

struct Cadastro {
    char nome[100];
    int idade;
    char endereco[200];
};

struct Cadastro* criarCadastro(int N) {
    struct Cadastro *vetor = (struct Cadastro*)malloc(N * sizeof(struct Cadastro));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("Digite o nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        printf("Digite a idade: ");
        scanf("%d", &vetor[i].idade);
        getchar();  
        printf("Digite o endereco: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
    }

    return vetor;
}

int main() {
    int N;

    printf("Digite o numero de cadastros: ");
    scanf("%d", &N);
    getchar();  

    struct Cadastro *vetorCadastro = criarCadastro(N);

    printf("\nDados cadastrados:\n");
    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("Nome: %s", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Endereco: %s", vetorCadastro[i].endereco);
    }

    free(vetorCadastro);

    return 0;
}
