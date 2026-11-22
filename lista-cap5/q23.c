#include <stdio.h>

#define DOBRO(x) x*2
#define DOBRO_CORRIGIDO(x) ((x) * 2)

int dobro(int x) {
    return x * 2;
}

int main() {
    printf("Macro DOBRO(2+3) = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    printf("\nMacro corrigida DOBRO_CORRIGIDO(2+3) = %d\n", DOBRO_CORRIGIDO(2+3));
    printf("Funcao dobro(2+3) = %d\n", dobro(2+3));

    return 0;
}
