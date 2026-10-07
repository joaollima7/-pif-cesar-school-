#include <stdio.h>

int main() {
    int senhaSecreta = 2026;
    int senhaDigitada;
    int tentativas;
    int acertou = 0;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Introduza a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaSecreta) {
            acertou = 1;
            break;
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acertou) {
        printf("Acesso Concedido! Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
