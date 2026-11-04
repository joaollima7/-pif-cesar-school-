include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    double a, b, c, delta, x1, x2;
    
    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);
    
    delta = (b * b) - (4 * a * c);
    
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes reais distintas: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }
    
    return 0;
}
