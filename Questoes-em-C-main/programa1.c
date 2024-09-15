#include <stdio.h>
#include <stdlib.h>
    int main(){
        float notas[5];
        int i = 0;
        float soma;
        float media;

            for(i = 0; i < 5; i++){
                scanf("%f", &notas[i]);
                soma += notas[i];
            }

        media = soma / 5;

            for (i= 0; i < 5; i++){
                printf("Notas %d: %.2f\n", i + 1, notas[i]);
            }

                printf("Média: %.2f", media);
    
    return 0;
    }