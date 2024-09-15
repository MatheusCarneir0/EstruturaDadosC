#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    int maisVelhoIndex = 0;
    int maisAltoIndex = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);
        printf("Digite o esporte do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].esporte);
        printf("Digite a idade do atleta %d: ", i + 1);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura (em metros) do atleta %d: ", i + 1);
        scanf("%f", &atletas[i].altura);

        if (atletas[i].idade > atletas[maisVelhoIndex].idade) {
            maisVelhoIndex = i;
        }

        if (atletas[i].altura > atletas[maisAltoIndex].altura) {
            maisAltoIndex = i;
        }
    }

    printf("\nO atleta mais velho é: %s\n", atletas[maisVelhoIndex].nome);
    printf("O atleta mais alto é: %s\n", atletas[maisAltoIndex].nome);

    return 0;
}