#include <stdio.h>

#define DEBUG

int somaAteN(int n) {
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

#ifdef DEBUG
        printf("i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));

    return 0;
}
