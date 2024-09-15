#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (&a > &b) {
        printf("O conteudo do maior endereco e: %d\n", a);
    } else {
        printf("O conteudo do maior endereco e: %d\n", b);
    }

    return 0;
}
