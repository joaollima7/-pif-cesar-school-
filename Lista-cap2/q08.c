#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int numero;
    int quadrado;
    float decimaParte;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    decimaParte = numero / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decimaParte);

    return 0;
}
