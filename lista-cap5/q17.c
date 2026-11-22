#include <stdio.h>

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

long fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}

int main() {
    int n;
    long iterativo, recursivo;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: o numero nao pode ser negativo.\n");
        return 0;
    }

    iterativo = fatorialIterativo(n);
    recursivo = fatorialRecursivo(n);

    printf("Fatorial iterativo de %d = %ld\n", n, iterativo);
    printf("Fatorial recursivo de %d = %ld\n", n, recursivo);

    if (iterativo == recursivo) {
        printf("Os resultados sao iguais!\n");
    } else {
        printf("Os resultados sao diferentes!\n");
    }

    return 0;
}
