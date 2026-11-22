#include <stdio.h>

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.9;
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float preco, pago, subtotal, total, troco;
    int quantidade, opcao;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Cartao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: ");
    scanf("%f", &pago);

    if (pago < total) {
        printf("Valor insuficiente!\n");
    } else {
        troco = calculaTroco(total, pago);
        printf("Troco: R$ %.2f\n", troco);
    }

    return 0;
}
