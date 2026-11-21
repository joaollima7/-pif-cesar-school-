#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char c;
    int i, tamanho;
    int vogais = 0, consoantes = 0, espacos = 0;

    printf("Digite uma frase: ");
    gets(frase);

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++) {
        c = frase[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } else if (c >= 'a' && c <= 'z') {
            consoantes++;
        } else if (c == ' ') {
            espacos++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Espacos: %d\n", espacos);

    return 0;
}
