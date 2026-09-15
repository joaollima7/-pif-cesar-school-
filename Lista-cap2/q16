#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float alturaDegrauCm, alturaTotalMetros, alturaTotalCm;
    int quantidadeDegraus;
    
    printf("Digite a altura de cada degrau (em centímetros): ");
    scanf("%f", &alturaDegrauCm);
    
    printf("Digite a altura total desejada (em metros): ");
    scanf("%f", &alturaTotalMetros);
    
    alturaTotalCm = alturaTotalMetros * 100.0;
    
    quantidadeDegraus = alturaTotalCm / alturaDegrauCm;
    
    printf("\nResultado: \n");
    printf("Numero minimo de degraus: %d\n", quantidadeDegraus);
    
    return 0;
}
