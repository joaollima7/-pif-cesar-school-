#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int a, b, c;
    
    printf("Digite o primeiro ângulo: ");
    scanf("%d", &a);
    printf("Digite o segundo ângulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro ângulo: ");
    scanf("%d", &c);
    
    if (a + b + c == 180) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Triângulo Retângulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Erro: A soma dos ângulos não é igual a 180 graus!\n");
    }
    
    return 0;
}
