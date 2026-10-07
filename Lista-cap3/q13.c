#include <stdio.h>

int main() {
    int n;
    long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Nao existe fatorial de numero negativo!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %lld\n", n, fatorial);
    }

    return 0;
}
