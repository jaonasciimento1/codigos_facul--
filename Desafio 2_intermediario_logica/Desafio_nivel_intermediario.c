#include <stdio.h>

int main() {
    // --- Variáveis das Cartas---
    char estado1[50], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[50], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    int opcao; // Variável para o Menu

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome do Estado: "); scanf(" %[^\n]", estado1);
    printf("Codigo (ex: A01): "); scanf(" %s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("Populacao: "); scanf("%d", &populacao1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos1);

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome do Estado: "); scanf(" %[^\n]", estado2);
    printf("Codigo (ex: B02): "); scanf(" %s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("Populacao: "); scanf("%d", &populacao2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // --- MENU INTERATIVO ---
    printf("\n============================\n");
    printf("   ESCOLHA O ATRIBUTO: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("============================\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    

    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE ---
    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %d \n %s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f \n %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f \n %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d \n %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (REGRA INVERTIDA)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f \n %s: %.2f\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            // Regra especial: Menor valor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Carta 1)\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Carta 2)\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente rodando o programa.\n");
            break;
    }

    return 0;
}