#include <stdio.h>

void imprimir(char tab[3][3]) {
    int i;

    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c\n", tab[i][0], tab[i][1], tab[i][2]);
        if (i < 2) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

int verificar(char tab[3][3], char j) {
    int i;

    for (i = 0; i < 3; i++) {
        if (tab[i][0] == j && tab[i][1] == j && tab[i][2] == j) {
            return 1;
        }
        if (tab[0][i] == j && tab[1][i] == j && tab[2][i] == j) {
            return 1;
        }
    }

    if (tab[0][0] == j && tab[1][1] == j && tab[2][2] == j) {
        return 1;
    }
    if (tab[0][2] == j && tab[1][1] == j && tab[2][0] == j) {
        return 1;
    }

    return 0;
}

int main() {
    char tab[3][3];
    int i, j, linha, coluna;
    int jogadas = 0;
    char jogador = 'X';

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tab[i][j] = ' ';
        }
    }

    imprimir(tab);

    while (1) {
        printf("Jogador %c, informe linha e coluna (0 a 2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
            printf("Posicao fora do tabuleiro! Tente de novo.\n");
            continue;
        }

        if (tab[linha][coluna] != ' ') {
            printf("Posicao ja ocupada! Tente de novo.\n");
            continue;
        }

        tab[linha][coluna] = jogador;
        jogadas++;

        imprimir(tab);

        if (verificar(tab, jogador) == 1) {
            printf("Jogador %c venceu!\n", jogador);
            break;
        }

        if (jogadas == 9) {
            printf("Deu empate!\n");
            break;
        }

        if (jogador == 'X') {
            jogador = 'O';
        } else {
            jogador = 'X';
        }
    }

    return 0;
}
