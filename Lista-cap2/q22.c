#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("A letra minuscula correspondente é: %c\n", minuscula);

    return 0;
}
