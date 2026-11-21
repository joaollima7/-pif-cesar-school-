#include <stdio.h>

int main(void) {
    int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes;
    int dias_passados = 0;
    int total_ano = 365;
    int dias_restantes;

    printf("Digite o dia e o mes (ex: 15 3): ");
    scanf("%d %d", &dia, &mes);

    if (mes < 1 || mes > 12 || dia < 1 || dia > dmes[mes - 1]) {
        printf("Data invalida.\n");
        return 1;
    }

    for (int i = 0; i < mes - 1; i++) {
        dias_passados += dmes[i];
    }
    dias_passados += (dia - 1);

    dias_restantes = total_ano - (dias_passados + 1);

    printf("Dias passados desde 1 de janeiro: %d\n", dias_passados);
    printf("Dias restantes para o fim do ano: %d\n", dias_restantes);

    return 0;
}
