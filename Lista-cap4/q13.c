#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    char opcao;
    double n1, n2, resultado;
    
    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &opcao);
    
    printf("Digite o primeiro número: ");
    scanf("%lf", &n1);
    printf("Digite o segundo número: ");
    scanf("%lf", &n2);
    
    switch (opcao) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        case '/':
            if (n2 == 0) {
                printf("Erro: Não é possível fazer divisão por zero!\n");
            } else {
                resultado = n1 / n2;
                printf("Resultado: %.2lf\n", resultado);
            }
            break;
            
        case '^':
            resultado = pow(n1, n2);
            printf("Resultado: %.2lf\n", resultado);
            break;
            
        default:
            printf("Erro: Opção inválida!\n");
            break;
    }
    
    return 0;
}
