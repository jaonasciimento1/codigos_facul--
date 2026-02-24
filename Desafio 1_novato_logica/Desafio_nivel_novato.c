//criando esse desafio direto no VSCode por ter recebido este erro ao abrir o link do desafio contido na aula: Repository Access Issue

#include <stdio.h>

int main() {
    
    // Variáveis para a carta 1

    char estado1[50];
        char codigo1[10]; // Ex: A01 + caractere nulo
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidade1;
        float pibPerCapita1;

    // Variáveis para a carta 2
    char estado2[50];
        char codigo2[10];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
        float densidade2;
        float pibPerCapita2;
        
    // Carta 1 ---
    printf("Cadastro da Carta 1\n"); // não há necessidade de scanf visto que é um texto fixo
            printf("Nome do Estado: ");
        scanf(" %[^\n]", estado1); 
            printf("Codigo da Carta (ex: A01): ");
        scanf(" %s", codigo1);
            printf("Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade1); 
            printf("Populacao: ");
        scanf("%d", &populacao1);
            printf("Area (km²): ");
        scanf("%f", &area1);
            printf("PIB: ");
        scanf("%f", &pib1);
            printf("Numero de Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n");

    // Carta 2 ---
    printf("Cadastro da Carta 2\n");
            printf("Nome do Estado: ");
        scanf(" %[^\n]", estado2);
            printf("Codigo da Carta (ex: B02): ");
        scanf(" %s", codigo2);
            printf("Nome da Cidade: ");
        scanf(" %[^\n]", nomeCidade2);
            printf("Populacao: ");
        scanf("%d", &populacao2);
            printf("Area (km²): ");
        scanf("%f", &area2);
            printf("PIB: ");
        scanf("%f", &pib2);
            printf("Numero de Pontos Turisticos: ");
        scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição da Carta 1 ---
    printf("\n Cadastro da Carta 1:\n");
    printf("Nome do estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // .2f limita a duas casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Demografica: %.2f habitantes/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da Carta 2 ---
    printf("\n Cadastro da Carta 2:\n");
    printf("Nome do Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //resultado da comparação entre as cartas (atributo: Area)
    printf("\nComparação de cartas (atributo: Area):\n");
    if (area1 > area2) {
        printf("\nCarta 1 - %s : %.2f\n Carta 2 - %s : %.2f\n Resultado: Carta 1 %s venceu", estado1, area1, estado2, area2, estado1);
    } else if (area2 > area1) {
        printf("\nCarta 1 - %s : %.2f\n Carta 2 - %s : %.2f\n Resultado: Carta 2 %s venceu", estado1, area1, estado2, area2, estado2);
    } else {
        printf("\nCarta 1 - %s : %.2f\n Carta 2 - %s : %.2f\n Resultado: Empate", estado1, area1, estado2, area2);
    }

}