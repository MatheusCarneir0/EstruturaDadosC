#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *vetor;

    do {
        printf("Digite um valor inteiro nao negativo para N: ");
        scanf("%d", &N);
        if (N < 0) {
            printf("Valor invalido. Por favor, insira um valor nao negativo.\n");
        }
    } while (N < 0);

    vetor = (int*)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor (cada valor deve ser >= 2):\n", N);
    for (int i = 0; i < N; i++) {
        do {
            printf("Elemento %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("Valor invalido. O valor deve ser maior ou igual a 2.\n");
            }
        } while (vetor[i] < 2);
    }

    printf("Vetor lido:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
