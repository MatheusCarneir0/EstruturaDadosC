#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int fila[TAM];
int frente = 0;  
int tras = 0;    

int isEmpty() {
    return frente == tras;
}

int isFull() { // Verificar se a fila está cheia
    return tras >= TAM;
}

void enfileirar(int x) { // Adicionar valor no final
    if (isFull()) {
        printf("Fila cheia! Não é possível enfileirar o valor %d.\n", x);
    } else {
        fila[tras++] = x;
        printf("Valor %d enfileirado com sucesso.\n", x);
    }
}

int desenfileirar() { // Remove e retorna o valor da frente
    if (isEmpty()) {
        printf("Fila vazia! Não há valores para desenfileirar.\n");
        return -1; 
    } else {
        return fila[frente++];
    }
}

void incrementarFrente() { // Incrementa o valor na frente
    if (isEmpty()) {
        printf("Fila vazia! Não há valor para incrementar.\n");
    } else {
        fila[frente]++;
        printf("Valor na frente da fila incrementado para %d.\n", fila[frente]);
    }
}

void decrementarFrente(int valor) {  // Decrementa o valor na frente
    if (isEmpty()) {
        printf("Fila vazia! Não há valor para decrementar.\n");
    } else {
        fila[frente] -= valor;
        printf("Valor na frente da fila decrementado para %d.\n", fila[frente]);
    }
}

void exibirFila() { // Exibir todos os valores na fila
    if (isEmpty()) {
        printf("Fila vazia!\n");
    } else {
        printf("Conteúdo da fila: ");
        for (int i = frente; i < tras; i++) {
            printf("%d ", fila[i]);
        }
        printf("\n");
    }
}

int main() {
    int opcao, valor;

    do {
        // Menu de opções
        printf("\n# Menu #\n");
        printf("1. Enfileirar valor\n");
        printf("2. Desenfileirar valor\n");
        printf("3. Incrementar frente\n");
        printf("4. Decrementar frente\n");
        printf("5. Exibir fila\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o valor a ser enfileirado: ");
                scanf("%d", &valor);
                enfileirar(valor);
                break;

            case 2: 
                valor = desenfileirar();
                if (valor != -1) {
                    printf("Valor desenfileirado: %d\n", valor);
                }
                break;

            case 3: 
                incrementarFrente();
                break;

            case 4: 
                printf("Digite o valor para decrementar: ");
                scanf("%d", &valor);
                decrementarFrente(valor);
                break;

            case 5: 
                exibirFila();
                break;

            case 6: 
                printf("Saindo\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}
