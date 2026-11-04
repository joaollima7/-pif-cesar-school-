#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int mes, ano;
    
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano corrente: ");
    scanf("%d", &ano);
    
    switch (mes) {
        case 1:
            printf("Janeiro possui 31 dias.\n");
            break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("Fevereiro possui 29 dias.\n");
            } else {
                printf("Fevereiro possui 28 dias.\n");
            }
            break;
        case 3:
            printf("Março possui 31 dias.\n");
            break;
        case 4:
            printf("Abril possui 30 dias.\n");
            break;
        case 5:
            printf("Maio possui 31 dias.\n");
            break;
        case 6:
            printf("Junho possui 30 dias.\n");
            break;
        case 7:
            printf("Julho possui 31 dias.\n");
            break;
        case 8:
            printf("Agosto possui 31 dias.\n");
            break;
        case 9:
            printf("Setembro possui 30 dias.\n");
            break;
        case 10:
            printf("Outubro possui 31 dias.\n");
            break;
        case 11:
            printf("Novembro possui 30 dias.\n");
            break;
        case 12:
            printf("Dezembro possui 31 dias.\n");
            break;
        default:
            printf("Erro: Mês inválido!\n");
            break;
    }
    
    return 0;
}
