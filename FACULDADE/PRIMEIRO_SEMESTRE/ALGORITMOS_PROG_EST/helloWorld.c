#include <stdio.h>
#include <string.h>

int main() {
    char nome[15];
    // Exibe uma mensagem no console
    printf("Olá, mundo!\n");
    printf("Digite teu nome:\n");// Solicita uma ação do usuário.
    scanf("%14s", nome);// Recebe uma string e salva na variável nome.
    printf("Seja bem vindo %14s !\n", nome);// Imprime uma saudação ao usuário.
    return 0;
}