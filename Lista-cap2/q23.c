#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, segundoInicial, duracao;
    int totalSegundos, horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora, os minutos e os segundos do inicio: ");
    scanf("%d %d %d", &horaInicial, &minutoInicial, &segundoInicial);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = (horaInicial * 3600) + (minutoInicial * 60) + segundoInicial + duracao;
    totalSegundos %= 86400;

    horaFinal = totalSegundos / 3600;
    minutoFinal = (totalSegundos % 3600) / 60;
    segundoFinal = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horaFinal, minutoFinal, segundoFinal);

    return 0;
}
