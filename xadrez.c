#include <stdio.h>

// Definindo uma constante para o número de movimentos
#define MOVIMENTOS 5

// --- Protótipos das Funções ---
void moverTorre(int passos);
void moverRainha(int passos);
void moverBispoComLoops(int tamanho);
void moverCavalo();


int main() {
    printf("--- Movimentando as Peças ---\n\n");

    // 1. Movimento da Torre com função recursiva
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(MOVIMENTOS);
    printf("\n"); // Separa as peças

    // 2. Movimento da Rainha com função recursiva
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(MOVIMENTOS);
    printf("\n"); // Separa as peças

    // 3. Movimento do Bispo com Loops Aninhados
    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    moverBispoComLoops(MOVIMENTOS);
    printf("\n");

    // 4. Movimento do Cavalo com Loops Aninhados
    printf("--- Movimento do Cavalo (Loops Aninhados) ---\n");
    moverCavalo();
    printf("\n");


    return 0;
}

void moverTorre(int passos) {
    // Caso Base
    if (passos <= 0) {
        return;
    }
    // Ação
    printf("Torre moveu para direita\n");
    // Passo Recursivo
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    // Caso Base
    if (passos <= 0) {
        return;
    }
    // Ação
    printf("Rainha moveu para esquerda\n");
    // Passo Recursivo
    moverRainha(passos - 1);
}

void moverBispoComLoops(int tamanho) {
    // Loop externo (vertical)
    for (int y = 1; y <= tamanho; y++) {
        // Loop interno (horizontal)
        for (int x = 1; x <= tamanho; x++) {
            if (y == x) {
                printf("Bispo moveu na diagonal para a casa (%d, %d)\n", y, x);
            }
        }
    }
}

void moverCavalo() {
    int cavaloX = 0;
    int cavaloY = 0;


    for (cavaloY = 1; cavaloY <= 2; cavaloY++) {
        printf("Cavalo moveu para cima\n");
    }
    for (cavaloX = 1; cavaloX < 2; cavaloX++) {
        printf("Cavalo moveu para direita\n");
    }
}