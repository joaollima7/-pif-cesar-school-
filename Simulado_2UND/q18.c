#include <stdio.h>

typedef struct {
    char nome[50];
    int codigo;
    float salario;
} Funcionario;

int main() {
    Funcionario f[4];
    float soma = 0, media;
    int i, maior = 0;

    for (i = 0; i < 4; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", f[i].nome);
        printf("Codigo: ");
        scanf("%d", &f[i].codigo);
        printf("Salario: ");
        scanf("%f", &f[i].salario);

        soma = soma + f[i].salario;
    }

    media = soma / 4;

    for (i = 1; i < 4; i++) {
        if (f[i].salario > f[maior].salario) {
            maior = i;
        }
    }

    printf("\nMaior salario: %s (codigo %d) - R$ %.2f\n",
           f[maior].nome, f[maior].codigo, f[maior].salario);

    printf("Media salarial: R$ %.2f\n", media);

    printf("\nReajuste de 10%% para quem ganha abaixo da media:\n");
    for (i = 0; i < 4; i++) {
        if (f[i].salario < media) {
            printf("%s: R$ %.2f -> R$ %.2f\n",
                   f[i].nome, f[i].salario, f[i].salario * 1.10);
        }
    }

    return 0;
}
