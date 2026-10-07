#include <stdio.h>

int main() {
    int num, encontrado = 0;

    printf("Digite um numero limite inteiro positivo (NUM): ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum numero satisfaz a condicao.\n");
    } else {
        printf("\n");
    }

    return 0;
}
