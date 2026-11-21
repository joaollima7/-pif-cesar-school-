#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGOS 5

int main() {
    int jogos[JOGOS][6];
    int i, j, k, numero, repetido;

    srand(time(NULL));

    for (i = 0; i < JOGOS; i++) {
        j = 0;
        while (j < 6) {
            numero = rand() % 60 + 1;

            repetido = 0;
            for (k = 0; k < j; k++) {
                if (jogos[i][k] == numero) {
                    repetido = 1;
                }
            }

            if (repetido == 0) {
                jogos[i][j] = numero;
                j++;
            }
        }
    }

    for (i = 0; i < JOGOS; i++) {
        printf("Jogo %d: ", i + 1);
        for (j = 0; j < 6; j++) {
            printf("%d ", jogos[i][j]);
        }
        printf("\n");
    }

    return 0;
}
