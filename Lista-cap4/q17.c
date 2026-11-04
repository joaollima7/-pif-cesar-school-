#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    double valor_total, valor_final, comissao;
    int opcao;
    
    printf("Digite o valor total da compra: ");
    scanf("%lf", &valor_total);
    
    printf("Digite a opção de pagamento (1 para À Vista, 2 para Parcelado em 3x): ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            valor_final = valor_total * 0.90;
            comissao = valor_final * 0.05;
            printf("Valor final a pagar com 10%% de desconto: R$ %.2lf\n", valor_final);
            printf("Comissão do vendedor (5%% sobre o valor com desconto): R$ %.2lf\n", comissao);
            break;
            
        case 2:
            valor_final = valor_total / 3.0;
            comissao = valor_total * 0.05;
            printf("Valor de cada parcela (3x sem juros): R$ %.2lf\n", valor_final);
            printf("Comissão do vendedor (5%% sobre o valor total): R$ %.2lf\n", comissao);
            break;
            
        default:
            printf("Opção de pagamento inválida!\n");
            break;
    }
    
    return 0;
}
