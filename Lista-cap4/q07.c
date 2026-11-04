#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
   SetConsoleOutputCP(CP_UTF8);
    double num;
    
    printf("Digite um número real: ");
    scanf("%lf", &num);
    
    if (num >= 0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(num));
    } else {
        printf("Quadrado do número: %.2lf\n", num * num);
    }
    
    return 0;
}
