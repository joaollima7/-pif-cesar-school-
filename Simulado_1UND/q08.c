#include <stdio.h>
#include <math.h>

int main() {
    float R, A, V;
    const float PI = 3.14159265;

    printf("Digite o valor do raio R: ");
    scanf("%f", &R);

    A = 4 * PI * pow(R, 2);
    V = (4.0 / 3.0) * PI * pow(R, 3);

    printf("Area da superficie = %.3f\n", A);
    printf("Volume da esfera = %.3f\n", V);

    return 0;
}
