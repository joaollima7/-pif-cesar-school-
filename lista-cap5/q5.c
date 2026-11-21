#include <stdio.h>

#define TAM 8

int somaVetor(int v[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma;
}

int maiorValor(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int buscaValor(int v[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int v[TAM];
    int x, pos;

    for (int i = 0; i < TAM; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Digite o valor a procurar: ");
    scanf("%d", &x);

    printf("Soma do vetor: %d\n", somaVetor(v, TAM));
    printf("Maior valor: %d\n", maiorValor(v, TAM));

    pos = buscaValor(v, TAM, x);
    if (pos != -1) {
        printf("Valor %d encontrado na posicao (indice) %d.\n", x, pos);
    } else {
        printf("Valor %d nao encontrado (-1).\n", x);
    }

    return 0;
}
