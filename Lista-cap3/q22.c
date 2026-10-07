#include <stdio.h>

int main() {
    int n, atual = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", atual);
            atual++;
        }
        printf("\n");
    }

    return 0;
}
