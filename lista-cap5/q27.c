#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return c * 9 / 5 + 32;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}

int main() {
    int opcao;
    float temperatura;

    printf("=== Conversor de Temperaturas ===\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (opcao == 1) {
        printf("%.2f C = %.2f F\n", temperatura, celsiusParaFahrenheit(temperatura));
    } else if (opcao == 2) {
        printf("%.2f C = %.2f K\n", temperatura, celsiusParaKelvin(temperatura));
    } else if (opcao == 3) {
        printf("%.2f F = %.2f C\n", temperatura, fahrenheitParaCelsius(temperatura));
    } else {
        printf("%.2f K = %.2f C\n", temperatura, kelvinParaCelsius(temperatura));
    }

    return 0;
}
