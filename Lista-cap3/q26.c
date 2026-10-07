#include <stdio.h>

int main() {
    int a, b, soma = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a >= b) {
        printf("Erro: A deve ser menor que B.\n");
        return 0;
    }

    printf("Primos no intervalo [%d, %d]: ", a, b);

    for (int i = a; i <= b; i++) {
        if (i > 1) {
            int divisores = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divisores++;
                }
            }
            if (divisores == 2) {
                printf("%d ", i);
                soma += i;
            }
        }
    }

    printf("\nSoma total dos primos: %d\n", soma);

    return 0;
}
