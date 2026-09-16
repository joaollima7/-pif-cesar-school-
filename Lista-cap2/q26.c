#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float comprimento, largura, precoMetro, perimetro, totalMetros, custoTotal;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preco unitario do metro de arame (em reais): ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    totalMetros = perimetro * 3;
    custoTotal = totalMetros * precoMetro;

    printf("Metros de arame necessários: %.2f m\n", totalMetros);
    printf("Custo total do cercamento: R$ %.2f\n", custoTotal);

    return 0;
}
