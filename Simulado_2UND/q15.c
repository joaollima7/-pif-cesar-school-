#include <stdio.h>
#include <string.h>

int main(void) {
    char convidados[5][30];
    char nome[30];
    int i, posicao = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do convidado %d: ", i + 1);
        fgets(convidados[i], 30, stdin);
        convidados[i][strcspn(convidados[i], "\n")] = '\0';
    }

    printf("\nDigite um nome para buscar: ");
    fgets(nome, 30, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (i = 0; i < 5; i++) {
        if (strcmp(convidados[i], nome) == 0) {
            posicao = i + 1;
            break;
        }
    }

    if (posicao != 0) {
        printf("%s esta na lista, na posicao %d.\n", nome, posicao);
    } else {
        printf("%s nao esta na lista.\n", nome);
    }

    return 0;
}
