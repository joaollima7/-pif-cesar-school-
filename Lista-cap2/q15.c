#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float n1, n2, n3, n4, mediaSimples, mediaPonderada;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    
    mediaSimples = (n1 + n2 + n3 + n4) / 4.0;
    mediaPonderada = (n1 * 1 + n2 * 1 + n3 * 2 + n4 * 2) / 6.0;
    
    printf("\nResultados: \n");
    printf("Média simples: %.2f\n", mediaSimples);
    printf("Média ponderada: %.2f\n", mediaPonderada);
    
    return 0;
}
