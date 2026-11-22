#include <stdio.h>

long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));
    }

    return 0;
}
