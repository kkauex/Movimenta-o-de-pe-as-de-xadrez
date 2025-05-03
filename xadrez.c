#include <stdio.h>

int main() {
    int i;

    // ---------- TORRE ----------
    // A torre se move em linha reta (horizontal ou vertical).
    // Aqui simulamos 5 casas para a direita usando um loop for.
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");  // imprime a direção a cada casa
    }

    // ---------- BISPO ----------
    // O bispo se move na diagonal.
    // Aqui simulamos 5 casas na diagonal para cima e à direita usando um loop while.
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    int contador = 1;
    while (contador <= 5) {
        printf("Cima, Direita\n");  // imprime as duas direções combinadas
        contador++;  // incrementa o contador
    }

    // ---------- RAINHA ----------
    // A rainha pode se mover em todas as direções.
    // Aqui simulamos 8 casas para a esquerda usando um loop do-while.
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int count = 1;
    do {
        printf("Esquerda\n");  // imprime a direção a cada casa
        count++;  // incrementa o contador
    } while (count <= 8);

    // ---------- CAVALO ----------
    // O cavalo se move em "L": duas casas numa direção, uma casa perpendicular.
    // Aqui simulamos duas casas para baixo e uma para a esquerda.
    // Usamos loops aninhados: um for externo e um while interno.
    printf("\nMovimento do Cavalo (2 casas para baixo, 1 casa para a esquerda):\n");
    int passosBaixo, passosEsquerda;

    for (passosBaixo = 1; passosBaixo <= 2; passosBaixo++) {
        printf("Baixo\n");  // cada iteração do for representa uma casa para baixo

        // Após completar as 2 casas para baixo, fazemos a casa para a esquerda
        if (passosBaixo == 2) {
            passosEsquerda = 1;
            while (passosEsquerda <= 1) {
                printf("Esquerda\n");  // imprime a direção final
                passosEsquerda++;  // incrementa para sair do while
            }
        }
    }

    return 0;  // fim do programa
}
