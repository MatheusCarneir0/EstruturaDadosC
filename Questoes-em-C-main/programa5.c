#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[10];
    int qt_negativos = 0;
    float soma_positivos = 0.0;

    printf("Digite 10 números reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            qt_negativos++;
        } else if(vetor[i] > 0) {
            soma_positivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", qt_negativos);
    printf("Soma dos números positivos: %.2f\n", soma_positivos);

    return 0;
}