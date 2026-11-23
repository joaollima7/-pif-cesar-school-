#include <stdio.h>

#define LOJAS 4
#define PRODUTOS 3

int main() {
    int vendas[LOJAS][PRODUTOS];
    int totalLoja, totalProduto[PRODUTOS] = {0};
    int i, j, maisVendido = 0;

    for (i = 0; i < LOJAS; i++) {
        for (j = 0; j < PRODUTOS; j++) {
            printf("Loja %d - quantidade do produto %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }

    printf("\nTotal vendido por loja:\n");
    for (i = 0; i < LOJAS; i++) {
        totalLoja = 0;
        for (j = 0; j < PRODUTOS; j++) {
            totalLoja += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }
        printf("Loja %d: %d unidades\n", i + 1, totalLoja);
    }

    for (j = 1; j < PRODUTOS; j++) {
        if (totalProduto[j] > totalProduto[maisVendido]) {
            maisVendido = j;
        }
    }

    printf("\nProduto mais vendido na rede: produto %d (%d unidades)\n",
           maisVendido + 1, totalProduto[maisVendido]);

    return 0;
}
