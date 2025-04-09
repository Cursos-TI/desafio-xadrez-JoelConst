
#include <stdio.h>

// Função Recursiva para movimentar a Torre (Direita)
void moverTorre(int casas) {
    if(casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função Recursiva + Loops Aninhados para movimentar o Bispo (Cima Direita)
void moverBispo(int casasVertical, int casasHorizontal) {
    if(casasVertical == 0)
        return;

    for(int i = 0; i < casasVertical; i++) {
        for(int j = 0; j < casasHorizontal; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casasVertical - 1, casasHorizontal);
}

// Função Recursiva para movimentar a Rainha (Esquerda)
void moverRainha(int casas) {
    if(casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para movimentar o Cavalo (2 casas para Cima e 1 para Direita)
void moverCavalo(int movimentos) {
    int movimentosRealizados = 0;

    for(int i = 0; i < movimentos; i++) {
        int casasCima = 2;
        int casasDireita = 1;

        for(int j = 0; j < casasCima; j++) {
            if(j == 1) {
                printf("Cima\n");
                continue;
            }
            printf("Cima\n");
        }

        for(int k = 0; k < casasDireita; k++) {
            if(k > 1) {
                break;
            }
            printf("Direita\n");
        }

        movimentosRealizados++;
    }
}

int main() {
    int casasTorre = 5;
    int casasBispoVertical = 3;
    int casasBispoHorizontal = 2;
    int casasRainha = 7;
    int movimentosCavalo = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    printf("\n");

    return 0;
}
