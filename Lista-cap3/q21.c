#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letraSecreta, tentativa;
    int tentativas = 0;

    srand(time(NULL));
    letraSecreta = rand() % 26 + 'a';

    do {
        printf("Digite uma letra minuscula (entre 'a' e 'z'): ");
        scanf(" %c", &tentativa);
        tentativas++;

        if (tentativa < letraSecreta) {
            printf("A letra secreta vem DEPOIS no alfabeto.\n");
        } else if (tentativa > letraSecreta) {
            printf("A letra secreta vem ANTES no alfabeto.\n");
        } else {
            printf("Parabens! Acertou a letra em %d tentativas.\n", tentativas);
        }

    } while (tentativa != letraSecreta);

    return 0;
}
