#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {
        { 3, 3, 3, 0, 0, 0, 0, 0, 0, 3 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
        { 3, 0, 0, 0, 0, 0, 0, 0, 0, 3 },
        { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 3, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 3, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
    };

    int navioV1[3] = {0, 0, 0};
    int navioH1[3] = {0, 0, 0};
    int navioD1[3] = {0, 0, 0};
    int navioD2[3] = {0, 0, 0};

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    printf("TABULEIRO\n#########\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int cone[3][5] = {
        { 0, 0, 1, 0, 0},
        { 0, 1, 1, 1, 0},
        { 1, 1, 1, 1, 1},
    };

    printf("HABILIDADE CONE\n#########\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int octaedro[3][5] = {
        { 0, 0, 1, 0, 0},
        { 0, 1, 1, 1, 0},
        { 0, 0, 1, 0, 0},
    };

    printf("HABILIDADE OCTAEDRO\n#########\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int cruz[3][5] = {
        { 0, 0, 1, 0, 0},
        { 1, 1, 1, 1, 1},
        { 0, 0, 1, 0, 0},
    };

    printf("HABILIDADE CRUZ\n#########\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");

    return 0;
}
