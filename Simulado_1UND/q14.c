#include <stdio.h>

int main() {
    int senhaSecreta = 2026;
    int senhaDigitada;
    int tentativas = 3;
    int acesso = 0;

    for (int i = 1; i <= tentativas; i++) {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaSecreta) {
            printf("Acesso Concedido!\n");
            acesso = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (!acesso) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}

