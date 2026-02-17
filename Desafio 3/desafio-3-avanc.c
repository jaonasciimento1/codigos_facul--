//criando esse desafio direto no VSCode por ter recebido este erro ao abrir o link do desafio contido na aula: Repository Access Issue

#include <stdio.h>

int main() {
    
    // Variáveis para a carta 1

    char estado1;
        char codigo1[4]; // Ex: A01 + caractere nulo
        char nomeCidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontosTuristicos1;
        float densidade1;
        float pibPerCapita1;
        float superpoder1;

    // Variáveis para a carta 2
    char estado2;
        char codigo2[4];
        char nomeCidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontosTuristicos2;
        float densidade2;
        float pibPerCapita2;
        float superpoder2;
        
    // Carta 1 ---
    printf("Cadastro da Carta 1\n"); // não há necessidade de scanf visto que é um texto fixo
            printf("Inicial do Estado (A-Z): ");
        scanf(" %c", &estado1); 
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
    superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidade1 + pibPerCapita1;

    printf("\n");

    // Carta 2 ---
    printf("Cadastro da Carta 2\n");
            printf("Inicial do Estado (A-Z): ");
        scanf(" %c", &estado2);
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
    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + densidade2 + pibPerCapita2;

    // Exibição da Carta 1 ---
    printf("\n Cadastro da Carta 1:\n");
    printf("Inicial do estado: %c\n", estado1);
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
    printf("Inicial do Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Demografica: %.2f habitantes/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n");

//comparando os dados das cartas
//utilizando ? ao invés de if para deixar o código mais enxuto, a estrutura é: condição ? valor_se_verdadeiro : valor_se_falso

    printf("Comparação de Cartas:\n\n");

    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : ((populacao1 < populacao2) ? "Carta 2" : "Empate"), (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : ((area1 < area2) ? "Carta 2" : "Empate"), (area1 > area2) ? 1 : 0);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : ((pib1 < pib2) ? "Carta 2" : "Empate"), (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : ((pontosTuristicos1 < pontosTuristicos2) ? "Carta 2" : "Empate"), (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 > densidade2) ? "Carta 1" : ((densidade1 < densidade2) ? "Carta 2" : "Empate"), (densidade1 > densidade2) ? 1 : 0);
    printf("PIB per Capita: %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : ((pibPerCapita1 < pibPerCapita2) ? "Carta 2" : "Empate"), (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: %s venceu (%d)\n", (superpoder1 > superpoder2) ? "Carta 1" : ((superpoder1 < superpoder2) ? "Carta 2" : "Empate"), (superpoder1 > superpoder2) ? 1 : 0);

    return 0;
    
}