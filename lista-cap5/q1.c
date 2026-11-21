#include <stdio.h>

#define TAM 10

int main(void) {
    float notas[TAM];
    float soma = 0.0f;
    float media, maior, menor;
    int acima_da_media = 0;

    for (int i = 0; i < TAM; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / TAM;

    maior = notas[0];
    menor = notas[0];

    for (int i = 0; i < TAM; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }
        if (notas[i] > media) {
            acima_da_media++;
        }
    }

    printf("\n--- Resumo da Turma ---\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos acima da media: %d\n", acima_da_media);

    return 0;
}
