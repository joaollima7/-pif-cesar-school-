#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int horas;
    float total = 0.0;
    
    printf("Digite o número de horas de permanência: ");
    scanf("%d", &horas);
    
    if (horas <= 0) {
        printf("Tempo inválido!\n");
    } else if (horas <= 2) {
        total = horas * 2.00;
    } else if (horas <= 4) {
        total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else {
        total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }
    
    if (horas > 0) {
        printf("Tempo total: %d horas\n", horas);
        printf("Valor final cobrado: R$ %.2f\n", total);
    }
    
    return 0;
}
