#include <stdio.h>

float calculaIMC(float peso, float altura);
void classificaIMC(float imc);

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida.\n");
        return 1;
    }

    imc = calculaIMC(peso, altura);
    printf("IMC: %.2f\n", imc);
    classificaIMC(imc);

    return 0;
}

float calculaIMC(float peso, float altura) {
    return peso / (altura * altura);
}

void classificaIMC(float imc) {
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }
}
