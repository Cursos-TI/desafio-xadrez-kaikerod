#include <stdio.h>

int main() {

    int torre = 0, bispo = 0, rainha = 0;

    //Torre se move para a direita
    for (torre = 1; torre <= 5; torre++) {
        printf("Torre moveu para direita\n");
    }

    //Bispo se move para a diagonal direita, cima
    while (bispo != 5) {
        printf("Bispo moveu para cima, direita\n");
        bispo++;
    }

    //Rainha se move para a esquerda
    do {
        printf("Rainha moveu para esquerda\n");
        rainha++;
    } while (rainha != 5);

    return 0;
}