#include <stdio.h>

int main() {
    float valor, soma = 0;
    int qtd = 0;

    printf("Digite um valor positivo (ou negativo para encerrar): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        qtd++;
        
        printf("Digite um valor positivo (ou negativo para encerrar): ");
        scanf("%f", &valor);
    }

    if (qtd > 0) {
        printf("Quantidade de valores inseridos: %d\n", qtd);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", soma / qtd);
    } else {
        printf("Nenhum valor valido foi inserido.\n");
    }

    return 0;
}
