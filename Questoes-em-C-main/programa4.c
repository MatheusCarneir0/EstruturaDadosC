#include <stdio.h>
#include <stdlib.h>

int main() {
    int x[10];
    int maior, menor;

    printf("Digite 10 números:\n");
    for(int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    maior = menor = x[0];

    for(int i = 1; i < 10; i++) {
        if(x[i] > maior) {
            maior = x[i];
        }
        if(x[i] < menor) {
            menor = x[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}