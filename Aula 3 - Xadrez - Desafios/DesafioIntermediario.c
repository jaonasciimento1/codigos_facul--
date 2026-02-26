#include <stdio.h>

int main() {
    // Variáveis para as casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    //  MOVIMENTAÇÃO DA TORRE 
    // A Torre move-se 5 casas para a DIREITA usando o loop FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    //  MOVIMENTAÇÃO DO BISPO
    // O Bispo move-se 5 casas na diagonal
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // A Rainha move-se 8 casas
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    //Movimento do cavalo
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 1; i++) {
        int b = 1; //b = baixo
        while (b <= casasBaixoCavalo) { 
            printf("Baixo\n");
            b++;
        }
        
        int e = 1; //e = esquerda
        while (e <= casasEsquerdaCavalo) {
            printf("Esquerda\n");
            e++;
        }
    }

    return 0;
}