#include <stdio.h>

int main() {
    char msg[100];
    int k, i;

    printf("Digite a mensagem (em maiusculas): ");
    gets(msg);

    printf("Digite o deslocamento k (de 0 a 26): ");
    scanf("%d", &k);

    // percorre a mensagem ate o terminador nulo
    for (i = 0; msg[i] != '\0'; i++) {

        // so mexe se for letra maiuscula
        if (msg[i] >= 'A' && msg[i] <= 'Z') {

            msg[i] = msg[i] + k;   // anda k letras

            // se passou do Z, volta para o inicio do alfabeto
            if (msg[i] > 'Z') {
                msg[i] = msg[i] - 26;
            }
        }
    }

    puts(msg);

    return 0;
}
