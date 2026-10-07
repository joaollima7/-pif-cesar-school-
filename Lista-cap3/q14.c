#include <stdio.h>

int main() {
    int i;
    int somaTotal = 0;

    for (i = 1; i <= 100; i++) {
        int quadrado = i * i;
        somaTotal += quadrado;
        printf("%d -> %d\n", i, quadrado);
    }

    printf("Soma total dos quadrados: %d\n", somaTotal);

    return 0;
}
