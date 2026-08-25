#include <stdio.h>

int main() {
    int seg, h, m, s;

    printf("Digite os segundos: ");
    scanf("%d", &seg);

    h = seg / 3600;
    m = (seg % 3600) / 60;
    s = seg % 60;

    printf("%d segundos sao %d hora, %d minuto e %d segundos.\n", seg, h, m, s);

    return 0;
}
