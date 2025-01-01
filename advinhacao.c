#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100

int main() {
    // inicia o programa
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhação *\n");
    printf("*****************************************\n");

    int chute;
    int numerosecreto = rand() % (MAX - MIN + 1) + MIN;
    int tentativas = 1;

    printf("numero %d\n", numerosecreto);

    while(1) { // lopp infinito
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou\n");
            break;
        }
        else if(maior) {
            printf("Seu chute foi maior que o número secreto!\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto!\n");
        }
        tentativas++;
    }

    // finaliza o programa
    printf("***********************************\n");
    printf("************ Fim de Jogo **********\n");
    printf("** Você acertou em %d tentativas **\n", tentativas);
    printf("***********************************\n");
}