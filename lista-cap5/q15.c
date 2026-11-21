#include <stdio.h>
#include <windows.h>

int meuStrlen(char s[]) {
    int cont = 0;
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        cont++;
    }

    return cont;
}

void inverte(char s[]) {
    int i, tam;
    char aux;

    tam = meuStrlen(s);

    for (i = 0; i < tam / 2; i++) {
        aux = s[i];
        s[i] = s[tam - 1 - i];
        s[tam - 1 - i] = aux;
    }
}

void removeChar(char s[], int pos) {
    int i, tam;

    tam = meuStrlen(s);

    for (i = pos; i < tam; i++) {
        s[i] = s[i + 1];
    }
}

int main() {
    char texto[100];
    int pos;

    SetConsoleOutputCP(65001);

    printf("Digite uma palavra: ");
    scanf("%s", texto);

    printf("Tamanho da palavra: %d\n", meuStrlen(texto));

    printf("Digite a posição que quer remover: ");
    scanf("%d", &pos);

    removeChar(texto, pos);
    printf("Palavra sem o caractere: %s\n", texto);

    inverte(texto);
    printf("Palavra invertida: %s\n", texto);

    return 0;
}
