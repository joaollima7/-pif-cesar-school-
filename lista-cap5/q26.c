#include <stdio.h>

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int quantidade, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Erro: a quantidade precisa ser positiva.\n");
        return 0;
    }

    printf("Sequencia de Fibonacci:\n");
    for (i = 0; i < quantidade; i++) {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
