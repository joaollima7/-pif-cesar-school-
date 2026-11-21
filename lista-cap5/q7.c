#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaPrincipal = 0;
    int somaSecundaria = 0;
    int somaAcima = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == j) {
                somaPrincipal = somaPrincipal + matriz[i][j];
            }
            if (i + j == 3) {
                somaSecundaria = somaSecundaria + matriz[i][j];
            }
            if (j > i) {
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    printf("\nSoma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaSecundaria);
    printf("Soma acima da diagonal principal: %d\n", somaAcima);

    return 0;
}
