#include <stdio.h>

int main() {

    int torre = 0, bispo = 0, rainha = 0;
    int cavaloX = 0, cavaloY = 0; //Vertical e horizontal

    //Torre se move para a direita
    for (torre = 1; torre <= 5; torre++) {
        printf("Torre moveu para direita\n");
    }
        printf("\n"); //Separa as peças
    

    //Bispo se move para a diagonal direita, cima
    while (bispo != 5) {
        printf("Bispo moveu para cima, direita\n");
        bispo++;
    }
        printf("\n"); //Separa as peças

    //Rainha se move para a esquerda
    do {
        printf("Rainha moveu para esquerda\n");
        rainha++;
    } while (rainha != 5);
        printf("\n"); //Separa as peças


    //Cavalo se move para baixo, esquerda
    for (cavaloY = 1; cavaloY <= 2; cavaloY++) {
        printf("Cavalo moveu para baixo\n");
        for (cavaloX = 1; cavaloX < cavaloY; cavaloX++) {
            printf("Cavalo moveu para esquerda\n");
        }
    }

    return 0;
}