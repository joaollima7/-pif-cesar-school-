#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float lado, b, h;
    
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    
    printf("Digite a base do retângulo: ");
    scanf("%f", &b);
    
    printf("Digite a altura do retângulo: ");
    scanf("%f", &h);
    
    printf("Digite a base do triângulo: ");
    scanf("%f", &b);
    
    printf("Digite a altura do triângulo: ");
    scanf("%f", &h);
    
    printf("\nResultados: \n");
    printf("Area do quadrado: %.2f\n", lado * lado);
    printf("Area do retângulo: %.2f\n", b * h);
    printf("Area do triângulo retângulo: %.2f\n", (b * h) / 2.0);
    
    return 0;
}
