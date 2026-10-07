#include <stdio.h>

int main() {
    float nota, soma = 0, maior, menor;
    int total = 0;

    printf("Digite a nota do aluno (ou -1.0 para sair): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        total++;

        printf("Digite a nota do aluno (ou -1.0 para sair): ");
        scanf("%f", &nota);
    }

    if (total > 0) {
        printf("\n--- Resultados ---\n");
        printf("a) Total de alunos: %d\n", total);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / total);
    } else {
        printf("Nenhum aluno foi avaliado.\n");
    }

    return 0;
}
