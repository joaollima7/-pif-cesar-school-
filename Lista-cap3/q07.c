#include <stdio.h>

int main() {
    int i;
    
    for (i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int i = 0;
    
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int i = 0;
    
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);
    
    return 0;
}

A estrutura mais adequada para este caso é o for, porque ja sabemos o inicio e o fim
