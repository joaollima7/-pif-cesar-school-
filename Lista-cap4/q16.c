#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float distancia, litros, consumo;
    
    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);
    
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);
    
    consumo = distancia / litros;
    
    printf("Consumo: %.2f km/l\n", consumo);
    
    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
    
    return 0;
}
