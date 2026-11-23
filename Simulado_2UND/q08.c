#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main(void) {
    int n, base, exp;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Soma dos digitos de %d: %d\n", n, somaDigitos(n));

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (>= 0): ");
    scanf("%d", &exp);

    if (exp < 0) {
        printf("Expoente invalido.\n");
    } else {
        printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));
    }

    return 0;
}

int somaDigitos(int n) {
    if (n < 0) {
        return somaDigitos(-n);
    }
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}

long potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * potencia(base, exp - 1);
}
