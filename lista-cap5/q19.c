#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero precisa ser positivo.\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);

    return 0;
}
