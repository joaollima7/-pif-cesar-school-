#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    srand(time(NULL));

    dado1 = (rand() % 6) + 1;
    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;

    printf("Resultado do primeiro dado: %d\n", dado1);
    printf("Resultado do segundo dado: %d\n", dado2);
    printf("Resultado do terceiro dado: %d\n", dado3);

    system("PAUSE");
    return 0;
}
