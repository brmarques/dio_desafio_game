#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  //Geração de números aleatórios

    char *opcoes[5] = {"Pedra", "Papel", "Tesoura", "Lagarto", "Spock"};
/*
    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 2, 4, 3},  // Papel
        {2, 1, 0, 3, 4},  // Tesoura
        {2, 4, 1, 0, 3},  // Lagarto
        {3, 2, 4, 3, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 2, 3, 2},  // Papel
        {2, 1, 0, 4, 1},  // Tesoura
        {2, 4, 3, 0, 3},  // Lagarto
        {4, 1, 2, 1, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 2, 4, 3},  // Papel
        {2, 1, 0, 3, 4},  // Tesoura
        {2, 3, 4, 0, 3},  // Lagarto
        {4, 1, 3, 1, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 1, 2, 2, 1},  // Pedra
        {2, 0, 1, 1, 2},  // Papel
        {1, 2, 0, 2, 1},  // Tesoura
        {1, 2, 1, 0, 4},  // Lagarto
        {2, 1, 2, 3, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 2, 4, 3},  // Papel
        {2, 1, 0, 3, 1},  // Tesoura
        {2, 3, 4, 0, 4},  // Lagarto
        {4, 1, 3, 3, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 2, 3, 2},  // Papel
        {2, 1, 0, 1, 3},  // Tesoura
        {2, 4, 1, 0, 4},  // Lagarto
        {3, 1, 4, 3, 0}   // Spock
    };

    int matriz[5][5] = {
        // Pedra, Papel, Tesoura, Lagarto, Spock
        {0, 2, 1, 1, 4},  // Pedra
        {1, 0, 4, 4, 3},  // Papel
        {2, 1, 0, 3, 1},  // Tesoura
        {2, 1, 4, 0, 4},  // Lagarto
        {3, 4, 1, 3, 0}   // Spock
    };
*/
    int matriz[5][5] = { //matriz correta, finalmente, caralho! \o/
        // Pedra, Papel, Tesoura, Lagarto, Spock
        { 0,  4,   1,     1,     4  },  // Pedra
        { 1,  0,   4,     4,     1  },  // Papel
        { 2,  1,   0,     1,     4  },  // Tesoura
        { 2,  1,   4,     0,     1  },  // Lagarto
        { 1,  4,   1,     4,     0  }   // Spock
    };

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

        int escolhaComp = rand() % 5;
        printf("Lembrando: \n");
        printf("A relação correta das vitórias no jogo é a seguinte:\n");
        printf("- Pedra esmaga Tesoura e esmaga Lagarto\n");
        printf("- Papel cobre Pedra e desaprova Spock\n");
        printf("- Tesoura corta Papel e decapita Lagarto\n");
        printf("- Lagarto come Papel e envenena Spock\n");
        printf("- Spock quebra Tesoura e vaporiza Pedra\n");

        printf("Você escolheu: %s\n", opcoes[escolhaJogador]);
        printf("O computador escolheu: %s\n", opcoes[escolhaComp]);

        int resultado = matriz[escolhaJogador][escolhaComp];

        if (resultado == 0) {
            printf("Empate!\n");
        } else if (resultado == 1) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }
    }

    return 0;
}
