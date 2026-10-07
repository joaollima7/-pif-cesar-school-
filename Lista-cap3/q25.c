#include <stdio.h>

int main() {
    int n, divisores = 0;

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Nao e primo (deve ser maior que 1).\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (divisores == 2) {
        printf("O numero %d e primo!\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
    }

    return 0;
}
