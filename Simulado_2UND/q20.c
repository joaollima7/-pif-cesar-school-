#include <stdio.h>

typedef struct {
    int hora;
    int minuto;
} Horario;

int duracao(Horario ini, Horario fim) {
    int minIni = ini.hora * 60 + ini.minuto;
    int minFim = fim.hora * 60 + fim.minuto;

    return minFim - minIni;
}

int main() {
    Horario ini, fim;
    int total;

    printf("Horario de inicio (hora e minuto): ");
    scanf("%d %d", &ini.hora, &ini.minuto);

    printf("Horario de fim (hora e minuto): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    total = duracao(ini, fim);

    printf("\nDuracao: %d minutos\n", total);
    printf("Duracao: %dh%02dmin\n", total / 60, total % 60);

    return 0;
}
