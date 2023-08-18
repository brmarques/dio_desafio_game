#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Função para gerar a escolha do computador
int escolhaComputador() {
    return rand() % 5;  // Gera um número aleatório entre 0 e 4
}

int main() {
    srand(time(NULL));  // Inicializa a semente para geração de números aleatórios

    char *opcoes[5] = {"Pedra", "Papel", "Tesoura", "Lagarto", "Spock"};

    printf("Bem-vindo ao Pedra, Papel, Tesoura, Lagarto e Spock!\n");

    while (1) {
        printf("\nEscolha sua jogada:\n");
        printf("0 - Pedra\n");
        printf("1 - Papel\n");
        printf("2 - Tesoura\n");
        printf("3 - Lagarto\n");
        printf("4 - Spock\n");
        printf("5 - Sair\n");

        int escolhaJogador;
        scanf("%d", &escolhaJogador);

        if (escolhaJogador == 5) {
            printf("Obrigado por jogar!\n");
            break;
        }

        if (escolhaJogador < 0 || escolhaJogador > 4) {
            printf("Opção inválida! Escolha um número entre 0 e 4.\n");
            continue;
        }

        int escolhaComp = escolhaComputador();

        printf("Você escolheu: %s\n", opcoes[escolhaJogador]);
        printf("O computador escolheu: %s\n", opcoes[escolhaComp]);

        // Verificação do vencedor
        int resultado = (escolhaJogador - escolhaComp + 5) % 5;

        if (resultado == 0) {
            printf("Empate!\n");
        } else if (resultado == 1 || resultado == 3) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }
    }

    return 0;
}
