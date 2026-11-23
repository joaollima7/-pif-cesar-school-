#include <stdio.h>

int main(void) {
    int idade, dia;
    float preco = 40.0;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    printf("Digite o dia da semana (1 = Domingo, ..., 7 = Sabado): ");
    scanf("%d", &dia);

    if (dia < 1 || dia > 7) {
        printf("Dia invalido! Digite um numero de 1 a 7.\n");
        return 1;
    }

    if (idade < 12 || idade > 60 || dia == 4) {
        preco = preco / 2;
    }

    printf("Valor do ingresso: R$ %.2f\n", preco);

    return 0;
}
