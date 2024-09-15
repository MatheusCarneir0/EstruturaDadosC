#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100 

void inverter_palavra(char *palavra) {// Função para inverter uma palavra
    int inicio = 0;
    int fim = strlen(palavra) - 1;
    while (inicio < fim) {
        char temp = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = temp;
        inicio++;
        fim--;
    }
}


void inverter_sentenca(char *sentenca) {// Função para inverter as letras de cada palavra na sentença
    char temp[MAX_SIZE];
    int j = 0;

    for (int i = 0; i <= strlen(sentenca); i++) {
        if (sentenca[i] == ' ' || sentenca[i] == '\0') {
            temp[j] = '\0'; 
            inverter_palavra(temp);  
            printf("%s ", temp);  
            j = 0;  
        } else {
            temp[j++] = sentenca[i];  
        }
    }
    printf("\n");
}

int main() {
    char sentenca[MAX_SIZE] = "AMU MEGASNEM ATERCES";
    
    printf("Sentença original: %s\n", sentenca);
    printf("Sentença invertida: ");
    inverter_sentenca(sentenca);
    
    return 0;
}
