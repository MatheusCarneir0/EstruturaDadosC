#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5 


int remove_pilha(int p[], int *t) {// Função para remover um elemento da pilha
    if (*t == -1) {
        printf("Pilha vazia.\n");
        return -1; 
    }

    int elemento = p[*t];  
    *t = *t - 1;  
    return elemento;
}


void insere_pilha(int p[], int *t, int tamanho, int y) {// Função para inserir um elemento na pilha
    if (*t == tamanho - 1) {
        printf("Pilha cheia.\n");
        return;
    }

    *t = *t + 1;  
    p[*t] = y;    
}

int main() {
    int pilha[TAMANHO];  
    int t = -1;          

    // Inserindo elementos na pilha
    insere_pilha(pilha, &t, TAMANHO, 10);
    insere_pilha(pilha, &t, TAMANHO, 20);
    insere_pilha(pilha, &t, TAMANHO, 30);

    // Removendo elementos da pilha
    printf("Elemento removido: %d\n", remove_pilha(pilha, &t));  
    printf("Elemento removido: %d\n", remove_pilha(pilha, &t));  

   
    insere_pilha(pilha, &t, TAMANHO, 40); // Inserindo mais um elemento na pilha

    // Removendo mais elementos da pilha
    printf("Elemento removido: %d\n", remove_pilha(pilha, &t));  
    printf("Elemento removido: %d\n", remove_pilha(pilha, &t));  

    return 0;
}
