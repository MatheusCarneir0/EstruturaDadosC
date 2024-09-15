#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int dia;
    int mes;
    int ano;
} Pessoa;

int calculaIdade(int dia, int mes, int ano) {
    int idade = 2024 - ano; 
    if (mes > 8 || (mes == 8 && dia > 17)) { 
        idade--;
    }
    return idade;
}

int comparaDatas(Pessoa p1, Pessoa p2) {
    if (p1.ano != p2.ano)
        return p1.ano - p2.ano;
    if (p1.mes != p2.mes)
        return p1.mes - p2.mes;
    return p1.dia - p2.dia;
}

int main() {
    Pessoa pessoas[6];
    Pessoa maisNova, maisVelha;

    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, 50, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Digite a data de nascimento (dd mm aaaa) da pessoa %d: ", i + 1);
        scanf("%d %d %d", &pessoas[i].dia, &pessoas[i].mes, &pessoas[i].ano);
        getchar();
    }

    maisNova = pessoas[0];
    maisVelha = pessoas[0];

    for (int i = 1; i < 6; i++) {
        if (comparaDatas(pessoas[i], maisVelha) < 0) {
            maisVelha = pessoas[i];
        }
        if (comparaDatas(pessoas[i], maisNova) > 0) {
            maisNova = pessoas[i];
        }
    }

    printf("\nA pessoa mais velha é: %s\n", maisVelha.nome);
    printf("A pessoa mais nova é: %s\n", maisNova.nome);

    return 0;
}
