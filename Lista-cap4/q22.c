#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float valor, preco_final;
    int estado;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite o código do estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);
    
    switch (estado) {
        case 1:
            preco_final = valor + (valor * 0.07);
            printf("Preço final com imposto de MG: R$ %.2f\n", preco_final);
            break;
            
        case 2:
            preco_final = valor + (valor * 0.12);
            printf("Preço final com imposto de SP: R$ %.2f\n", preco_final);
            break;
            
        case 3:
            preco_final = valor + (valor * 0.15);
            printf("Preço final com imposto de RJ: R$ %.2f\n", preco_final);
            break;
            
        case 4:
            preco_final = valor + (valor * 0.08);
            printf("Preço final com imposto de MS: R$ %.2f\n", preco_final);
            break;
            
        default:
            printf("Erro: Código de estado inválido!\n");
            break;
    }
    
    return 0;
}
