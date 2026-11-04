#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float nota;
    int faltas;
    
    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);
    printf("Digite o número de faltas: ");
    scanf("%d", &faltas);
    
    if (nota >= 9.0 && nota <= 10.0) {
        if (faltas <= 20) {
            printf("Conceito A\n");
        } else {
            printf("Conceito B\n");
        }
    } else if (nota >= 7.5 && nota <= 8.9) {
        if (faltas <= 20) {
            printf("Conceito B\n");
        } else {
            printf("Conceito C\n");
        }
    } else if (nota >= 5.0 && nota <= 7.4) {
        if (faltas <= 20) {
            printf("Conceito C\n");
        } else {
            printf("Conceito D\n");
        }
    } else if (nota >= 4.0 && nota <= 4.9) {
        if (faltas <= 20) {
            printf("Conceito D\n");
        } else {
            printf("Conceito E\n");
        }
    } else if (nota >= 0.0 && nota <= 3.9) {
        printf("Conceito E\n");
    } else {
        printf("Nota inválida!\n");
    }
    
    return 0;
}
