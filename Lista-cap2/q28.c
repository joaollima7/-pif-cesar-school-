#include <stdio.h>
#include <stdlib.h>

int main() {
    float horasNormais, horasExtras, salarioBruto, imposto;

    printf("Digite o numero de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o numero de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);
    imposto = (salarioBruto > 12000.0) ? (salarioBruto - 12000.0) * 0.10 : 0.0;

    printf("Salario anual bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto progressivo a pagar: R$ %.2f\n", imposto);

    system("PAUSE");
    return 0;
}
