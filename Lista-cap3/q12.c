#include <stdio.h>

int main() {
    float c, f, k;

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("----------------------------------\n");

    for (c = 0.0; c <= 100.0; c += 5.0) {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        
        printf("%.2f\t\t%.2f\t\t%.2f\n", c, f, k);
    }

    return 0;
}
