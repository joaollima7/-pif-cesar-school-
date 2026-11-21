#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANCAMENTOS 30
#define FACES 6

int main(void) {
    int resultados[LANCAMENTOS];
    int frequencia[FACES] = {0};

    srand((unsigned int)time(NULL));

    for (int i = 0; i < LANCAMENTOS; i++) {
        resultados[i] = rand() % 6 + 1;
        frequencia[resultados[i] - 1]++;
    }

    for (int i = 0; i < FACES; i++) {
        printf("Face %d: %d vezes\n", i + 1, frequencia[i]);
    }

    return 0;
}
