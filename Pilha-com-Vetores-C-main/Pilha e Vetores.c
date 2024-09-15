#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pilha[TAM];
int posicaoAtual = -1;  

int isEmpty() {
    return posicaoAtual == -1;
}

int isFull() { //Verificar Pilha Cheia
    return posicaoAtual >= TAM - 1;
}

void empilhar(int x) { //Add valor ao topo
    if (isFull()) {
        printf("Pilha cheia! Não é possível empilhar o valor %d.\n", x);
    } else {
        pilha[++posicaoAtual] = x;
        printf("Valor %d empilhado com sucesso.\n", x);
    }
}

int desempilhar() { //Remove e retona o valor do topo
    if (isEmpty()) {
        printf("Pilha vazia! Não há valores para desempilhar.\n");
        return -1; 
    } else {
        return pilha[posicaoAtual--];
    }
}

void incrementarTopo() { //Increnta o valor no topo da pilha
    if (isEmpty()) {
        printf("Pilha vazia! Não há valor para incrementar.\n");
    } else {
        pilha[posicaoAtual]++;
        printf("Valor no topo da pilha incrementado para %d.\n", pilha[posicaoAtual]);
    }
}

void decrementarTopo(int valor) {  //Decrementa o valor no topo
    if (isEmpty()) {
        printf("Pilha vazia! Não há valor para decrementar.\n");
    } else {
        pilha[posicaoAtual] -= valor;
        printf("Valor no topo da pilha decrementado para %d.\n", pilha[posicaoAtual]);
    }
}

void exibirPilha() { //Exibir todos os valores na pilha
    if (isEmpty()) {
        printf("Pilha vazia!\n");
    } else {
        printf("Conteúdo da pilha: ");
        for (int i = 0; i <= posicaoAtual; i++) {
            printf("%d ", pilha[i]);
        }
        printf("\n");
    }
}

int main() {
    int opcao, valor;

    do {
        // Menu de opções
        printf("\n# Menu #\n");
        printf("1. Empilhar valor\n");
        printf("2. Desempilhar valor\n");
        printf("3. Incrementar topo\n");
        printf("4. Decrementar topo\n");
        printf("5. Exibir pilha\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o valor a ser empilhado: ");
                scanf("%d", &valor);
                empilhar(valor);
                break;

            case 2: 
                valor = desempilhar();
                if (valor != -1) {
                    printf("Valor desempilhado: %d\n", valor);
                }
                break;

            case 3: 
                incrementarTopo();
                break;

            case 4: 
                printf("Digite o valor para decrementar: ");
                scanf("%d", &valor);
                decrementarTopo(valor);
                break;

            case 5: 
                exibirPilha();
                break;

            case 6: 
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}
