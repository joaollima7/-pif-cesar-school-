#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int N, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    printf("Primos de 1 ate %d: ", N);
    for (i = 1; i <= N; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int ehPrimo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}
