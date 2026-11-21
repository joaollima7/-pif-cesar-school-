#include <stdio.h>

void lerNotas(float m[][4], int alunos) {
    int i, j;

    for (i = 0; i < alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("  Nota da prova %d: ", j + 1);
            scanf("%f", &m[i][j]);
        }
    }
}

float mediaAluno(float m[][4], int aluno) {
    int j;
    float soma = 0;

    for (j = 0; j < 4; j++) {
        soma = soma + m[aluno][j];
    }

    return soma / 4;
}

float mediaProva(float m[][4], int alunos, int prova) {
    int i;
    float soma = 0;

    for (i = 0; i < alunos; i++) {
        soma = soma + m[i][prova];
    }

    return soma / alunos;
}

int main() {
    float notas[5][4];
    int i, j;

    lerNotas(notas, 5);

    printf("\nMedia de cada aluno:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno(notas, i));
    }

    printf("\nMedia de cada prova:\n");
    for (j = 0; j < 4; j++) {
        printf("Prova %d: %.2f\n", j + 1, mediaProva(notas, 5, j));
    }

    return 0;
}
