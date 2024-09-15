#include <stdio.h>

#define TAMANHO 5

int main() {
    int fila[TAMANHO];
    int s = 0, t = 0;

    inserir(fila, &t, s, 10, TAMANHO);
    inserir(fila, &t, s, 20, TAMANHO);
    inserir(fila, &t, s, 30, TAMANHO);

    printf("Elemento removido: %d\n", remover(fila, &s, t, TAMANHO));
    printf("Elemento removido: %d\n", remover(fila, &s, t, TAMANHO));

    inserir(fila, &t, s, 40, TAMANHO);

    return 0;
}
