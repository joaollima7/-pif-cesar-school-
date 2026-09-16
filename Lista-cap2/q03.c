#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", num, num, num, num);

    return 0;
}
