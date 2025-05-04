#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }
    // Navio na vertical:
    for (int i = 3; i <= 5; i++){
        tabuleiro[i][4] = 3;
    }
    // Navio na horizontal:
    for (int j = 5; j <= 7; j++){
        tabuleiro[7][j] = 3;
    }
    
    // Nível Aventureiro - Navios na diagonal
    for(int i = 4, j = 7; i <= 6 && i <= 9; i++, j++){
        tabuleiro[i][j] = 3;
    }
    for (int i = 6, j = 2; i <= 8 && j >= 0; i++, j--){
        tabuleiro[i][j] = 3;
    }

    printf("TABULEIRO\n");
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
