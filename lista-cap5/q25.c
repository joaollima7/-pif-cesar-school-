#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den) {
    int divisor = mdc(num, den);

    printf("Fracao %d/%d simplificada = %d/%d\n", num, den, num / divisor, den / divisor);
}

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: os numeros precisam ser positivos.\n");
        return 0;
    }

    printf("MDC de %d e %d = %d\n", a, b, mdc(a, b));

    simplifica(a, b);

    return 0;
}
