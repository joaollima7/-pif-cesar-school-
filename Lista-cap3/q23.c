#include <stdio.h>

int main() {
    int l;

    printf("Digite a dimensao do lado do quadrado (entre 3 e 20): ");
    scanf("%d", &l);

    if (l < 3 || l > 20) {
        printf("Dimensao invalida!\n");
        return 0;
    }

    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= l; j++) {
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
