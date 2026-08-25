#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP (CP_UTF8);
    int n1, n2, n3;
    double media;

    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A média é: %.2lf\n", media);

    return 0;
}
