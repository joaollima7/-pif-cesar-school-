#include <stdio.h>

typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;

typedef struct {
    char nome[50];
    Nivel nivel;
} Usuario;

int main() {
    Usuario u;
    int n;

    printf("Nome: ");
    scanf(" %[^\n]", u.nome);

    printf("Nivel (1 - Visitante, 2 - Usuario, 3 - Admin): ");
    scanf("%d", &n);
    u.nivel = n;

    printf("\n%s: ", u.nome);

    switch (u.nivel) {
        case VISITANTE:
            printf("apenas leitura\n");
            break;
        case USUARIO:
            printf("leitura e escrita\n");
            break;
        case ADMIN:
            printf("leitura, escrita e gerenciamento de usuarios\n");
            break;
        default:
            printf("nivel invalido\n");
    }

    return 0;
}
