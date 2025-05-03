#include <stdio.h>

int main() {
    int i;

    // Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita (%d)\n", i);
    }

    // Bispo: 5 casas na diagonal cima-direita (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima Direita (%d)\n", i);
        i++;
    }

    // Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
