#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int diasTrabalhados;
    float salarioBruto, salarioLiquido;
    
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);
    
    salarioBruto = diasTrabalhados * 30.0;
    salarioLiquido = salarioBruto - (salarioBruto * 0.08);
    
    printf("\nResultados:\n");
    printf("Quantia bruta: R$ %.2f\n", salarioBruto);
    printf("Valor liquido: R$ %.2f\n", salarioLiquido);
    
    return 0;
}
