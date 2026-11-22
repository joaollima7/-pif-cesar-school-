#include <stdio.h>

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (ehPrimo(n) == 1) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    printf("\nNumeros primos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++) {
        if (ehPrimo(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
