#include <stdio.h>

int main() {
    int opcao;
    float salario;

    do {
        printf("\n--- Folha de Pagamento ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: ");
                scanf("%f", &salario);
                if (salario <= 2000.0) {
                    salario += salario * 0.15;
                } else {
                    salario += salario * 0.10;
                }
                printf("Novo salario reajustado: R$ %.2f\n", salario);
                break;

            case 2:
                printf("Digite o salario atual: ");
                scanf("%f", &salario);
                if (salario <= 3000.0) {
                    salario -= salario * 0.08;
                } else {
                    salario -= salario * 0.15;
                }
                printf("Salario liquido apos imposto: R$ %.2f\n", salario);
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
