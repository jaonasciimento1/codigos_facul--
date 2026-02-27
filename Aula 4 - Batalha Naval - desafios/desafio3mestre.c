#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int tamanhoNavio = 3;

    // --- INICIALIZAÇÃO DO TABULEIRO ---
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // --- POSICIONAMENTO DOS NAVIOS ---
    
    // navio horizontal
    int linhaH = 0, colH = 0;
    if (colH + tamanhoNavio <= 10) {
        for (int j = 0; j < tamanhoNavio; j++) {
            tabuleiro[linhaH][colH + j] = 3;
        }
    }

    // navio vertical
    int linhaV = 0, colV = 9;
    if (linhaV + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaV + i][colV] = 3;
        }
    }

    // navio diagonal 1 (meio do tabuleiro)
    int linhaD1 = 5, colD1 = 4;
    if (linhaD1 + tamanhoNavio <= 10 && colD1 + tamanhoNavio <= 10) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaD1 + i][colD1 + i] = 3;
        }
    }

    // navio diagonal 2 (inferior esquerdo)
    int linhaD2 = 7, colD2 = 2;
    if (linhaD2 + tamanhoNavio <= 10 && colD2 - tamanhoNavio >= -1) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaD2 + i][colD2 - i] = 3;
        }
    }

    // --- CRIAÇÃO DAS MATRIZES DE HABILIDADE (5x5) ---
    int cone[5][5], cruz[5][5], octaedro[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            // logica do cone
            if (i < 3 && j >= (2 - i) && j <= (2 + i)) {
                cone[i][j] = 1;
            } else {
                cone[i][j] = 0;
            }

            // logica da cruz
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            } else {
                cruz[i][j] = 0;
            }

            // logica do octaedro
            int distLinha = (i < 2) ? (2 - i) : (i - 2);
            int distCol = (j < 2) ? (2 - j) : (j - 2);
            if (distLinha + distCol <= 2) {
                octaedro[i][j] = 1;
            } else {
                octaedro[i][j] = 0;
            }
        }
    }

    // --- DEMONSTRAÇÃO DAS MATRIZES DE HABILIDADE ---
    printf("--- ÁREAS DE EFEITO (BLUEPRINTS) ---\n\n");

    printf("Habilidade em Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nHabilidade em Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\nHabilidade em Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }
    printf("\n------------------------------------\n\n");

    // --- APLICAÇÃO DAS HABILIDADES NO TABULEIRO ---
    // aplicando a habilidade de cone
    int origemConeX = 2, origemConeY = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cone[i][j] == 1) {
                int mapX = (origemConeX - 2) + i;
                int mapY = (origemConeY - 2) + j;
                if (mapX >= 0 && mapX < 10 && mapY >= 0 && mapY < 10) {
                    tabuleiro[mapX][mapY] = 5;
                }
            }
        }
    }

    // aplicando a habilidade de cruz
    int origemCruzX = 2, origemCruzY = 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (cruz[i][j] == 1) {
                int mapX = (origemCruzX - 2) + i;
                int mapY = (origemCruzY - 2) + j;
                if (mapX >= 0 && mapX < 10 && mapY >= 0 && mapY < 10) {
                    tabuleiro[mapX][mapY] = 5;
                }
            }
        }
    }

    // aplicando a habilidade de octaedro
    int origemOctX = 7, origemOctY = 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (octaedro[i][j] == 1) {
                int mapX = (origemOctX - 2) + i;
                int mapY = (origemOctY - 2) + j;
                if (mapX >= 0 && mapX < 10 && mapY >= 0 && mapY < 10) {
                    tabuleiro[mapX][mapY] = 5;
                }
            }
        }
    }

    // --- EXIBIÇÃO DO TABULEIRO FINAL ---
    printf("--- TABULEIRO MESTRE FINAL ---\n\n");
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}