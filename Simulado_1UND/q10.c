#include <stdio.h>

int main() {
    int totalSegundos, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Equivale a: %d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, segundos);

    return 0;
}
