#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    double a, b, c;
    
    printf("Digite o primeiro lado: ");
    scanf("%lf", &a);
    printf("Digite o segundo lado: ");
    scanf("%lf", &b);
    printf("Digite o terceiro lado: ");
    scanf("%lf", &c);
    
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || a == c || b == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }
    
    return 0;
}
