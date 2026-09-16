#include <stdio.h>

int main() {
    float salarioBase, salarioLiquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    salarioLiquido = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);

    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
