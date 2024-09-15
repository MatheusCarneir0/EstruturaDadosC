#include <stdio.h>
#include <stdlib.h>
    int main(){
        int vet[10];
        int i, p = 0;
        
        for(i = 0; i < 10; i++){
            scanf("%d", &vet[i]);
        }

        for(i = 0; i < 10; i++){
            if(vet[i] % 2 == 0){
                printf("Números pares: %d\n", vet[i]);
                p++;
            }
        }       
                
                printf("Qt pares: %d\n", p);
        return 0;
    }