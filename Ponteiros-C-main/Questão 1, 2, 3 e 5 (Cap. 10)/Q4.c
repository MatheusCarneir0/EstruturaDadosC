#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int *ptr = array;  

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i); 
    }

    printf("\nO dobro de cada valor e:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", *(ptr + i) * 2); 
    }

    return 0;
}
