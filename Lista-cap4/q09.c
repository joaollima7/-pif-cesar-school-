#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float lab, semestral, final, media;
    
    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliação Semestral: ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &final);
    
    media = (lab * 2.0 + semestral * 3.0 + final * 5.0) / 10.0;
    
    printf("Média ponderada: %.2f\n", media);
    
    if (media >= 5.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
    
    return 0;
}
