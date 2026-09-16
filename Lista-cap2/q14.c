#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float a, b, c, p, area;
    
    printf("Digite o lado a: ");
    scanf("%f", &a);
    
    printf("Digite o lado b: ");
    scanf("%f", &b);
    
    printf("Digite o lado c: ");
    scanf("%f", &c);
    
    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));
    
    printf("Área: %.2f\n", area);
    
    return 0;
}
