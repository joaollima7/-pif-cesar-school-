#include <stdio.h>

int main() {
    int diasTrabalhados;
    float salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * 45.0;
    gratificacao = salarioBruto * 0.05;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n--- HOLERITE DETALHADO ---\n");
    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2f\n", imposto);
    printf("Valor Liquido a Receber: R$ %.2f\n", salarioLiquido);

    return 0;
}
