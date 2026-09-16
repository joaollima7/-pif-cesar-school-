#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int dia, mes, ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d / %d / %d", &dia, &mes, &ano);

    printf("Data invertida é: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}
