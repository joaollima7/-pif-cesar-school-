#include <stdio.h>
#include <windows.h>

#define TAMANHO 15

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    int vet[TAMANHO];
    int num;
    int n = 0;

    do {
        printf("Número: ");
        scanf("%d", &num);
        if (num != 0) {
            if (n == TAMANHO) { printf("BUFFER LOTADO\n"); break; }
            vet[n++] = num;
        }
    } while (num != 0);

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
