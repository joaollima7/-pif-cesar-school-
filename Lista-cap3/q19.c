#include <stdio.h>

int main() {
    int n;
    long long t1 = 1, t2 = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
    } else {
        printf("Sequencia de Fibonacci: ");
        
        for (int i = 1; i <= n; i++) {
            if (i == 1 || i == 2) {
                printf("1 ");
                proximo = 1;
            } else {
                proximo = t1 + t2;
                t1 = t2;
                t2 = proximo;
                printf("%lld ", proximo);
            }
        }
        
        printf("\nO valor do %do termo e: %lld\n", n, proximo);
    }

    return 0;
}
