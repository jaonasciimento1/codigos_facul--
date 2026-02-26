#include <stdio.h>

// Função para o movimento da Torre
void moverTorre(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorre(n - 1);
    }
}

// Função para o movimento da Rainha
void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

// Função para o movimento do Bispo
void moverBispo(int n) {
    if (n > 0) {
        for (int v = 1; v <= 1; v++) {
            printf("Cima\n");
            for (int h = 1; h <= 1; h++) {
                printf("Direita\n");
            }
        }
        moverBispo(n - 1);
    }
}

int main() {
    // Definição da quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // --- MOVIMENTAÇÃO DA TORRE ---
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO ---
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO ---
    // O Cavalo move-se em "L": 2 casas para Cima e 1 para a Direita.
    printf("Movimento do Cavalo:\n");
    
    for (int i = 1, j = 1; i <= 2; i++) {
        printf("Cima\n");
        
        while (j > 0) {
            if (i < 2) { 
                break; // O Cavalo move-se 2 casas para Cima, então interrompe o loop após a primeira iteração.
            }
            printf("Direita\n");
            j--;
        }
    }

    return 0;
}