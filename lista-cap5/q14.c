#include <stdio.h>
#include <string.h>
#include <windows.h>

int ehPalindromo(char s[]) {
    int inicio = 0;
    int fim = strlen(s) - 1;

    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char palavra[100];

    SetConsoleOutputCP(65001);

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra) == 1) {
        printf("%s é um palíndromo\n", palavra);
    } else {
        printf("%s não é um palíndromo\n", palavra);
    }

    return 0;
}
