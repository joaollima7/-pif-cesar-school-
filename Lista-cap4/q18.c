#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int opcao;
    double temp, resultado;
    
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);
    
    printf("Digite a temperatura: ");
    scanf("%lf", &temp);
    
    switch (opcao) {
        case 1:
            resultado = temp * 1.8 + 32;
            printf("Temperatura em Fahrenheit: %.2lf\n", resultado);
            break;
            
        case 2:
            resultado = temp + 273.15;
            printf("Temperatura em Kelvin: %.2lf\n", resultado);
            break;
            
        case 3:
            resultado = (temp - 32) / 1.8;
            printf("Temperatura em Celsius: %.2lf\n", resultado);
            break;
            
        case 4:
            resultado = temp - 273.15;
            printf("Temperatura em Celsius: %.2lf\n", resultado);
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    return 0;
}
