#include <stdio.h>

// =========================
// Função recursiva para a Torre
// A Torre move-se em linha reta horizontal ou vertical
// Aqui, simulamos 5 casas para a direita usando recursão
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;  // Caso base: terminou o movimento
    printf("Direita\n");  // Imprime a direção para cada casa
    moverTorre(casasRestantes - 1);  // Chamada recursiva diminuindo o contador
}

// =========================
// Função recursiva para a Rainha
// A Rainha pode mover-se em todas as direções
// Aqui, simulamos 8 casas para a esquerda usando recursão
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;  // Caso base
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);  // Chamada recursiva
}

// =========================
// Função recursiva para o Bispo com loops aninhados
// O Bispo move-se na diagonal
// Aqui, simulamos 5 casas na diagonal (cima e direita)
// O loop mais externo (recursivo) controla o vertical (cima),
// e o loop interno (for) controla o horizontal (direita)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0) return;  // Caso base: terminou o movimento vertical
    for (int i = 0; i < horizontal; i++) {
        printf("Cima, Direita\n");  // Movimento diagonal
    }
    moverBispoRecursivo(vertical - 1, horizontal);  // Chamada recursiva
}

int main() {
    // =========================
    // Movimento da Torre usando recursão
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // =========================
    // Movimento do Bispo usando recursão + loops aninhados
    printf("\nMovimento do Bispo (5 casas na diagonal cima-direita):\n");
    moverBispoRecursivo(5, 1);

    // =========================
    // Movimento da Rainha usando recursão
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // =========================
    // Movimento complexo do Cavalo usando loops aninhados
    // O Cavalo move-se em "L": duas casas em uma direção (cima) e uma casa perpendicular (direita)
    // Aqui usamos um loop externo (for) para as duas casas para cima,
    // e um loop interno (while) para a casa para a direita, com exemplo de uso de break
    printf("\nMovimento do Cavalo (2 casas para cima, 1 casa para a direita):\n");

    int passosCima = 0;
    for (int i = 0; i < 2; i++) {  // Loop externo: duas casas para cima
        printf("Cima\n");
        passosCima++;

        // Quando completar as duas casas para cima, executa a casa para a direita
        if (passosCima == 2) {
            int passosDireita = 0;
            while (passosDireita < 1) {  // Loop interno: uma casa para a direita
                printf("Direita\n");
                passosDireita++;

                // Usamos break para demonstrar controle de fluxo (mesmo que não seja estritamente necessário aqui)
                if (passosDireita == 1) {
                    break;  // Sai do while após uma casa
                }
            }
        }
    }

    return 0;
}
