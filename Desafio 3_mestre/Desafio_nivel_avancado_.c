#include <stdio.h>

int main() {
    // --- Variáveis das Cartas ---
    char estado1[50], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[50], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    int opcao1, opcao2; // Variáveis para os Menus

    // Variáveis auxiliares para armazenar os valores escolhidos dos atributos
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    
    // Variáveis ponteiro para guardar os nomes dos atributos escolhidos
    char *nome_attr1 = "";
    char *nome_attr2 = "";

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

    // --- MENU INTERATIVO 1 ---
    printf("\n============================\n");
    printf("   ESCOLHA O 1º ATRIBUTO: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("============================\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // --- CARREGANDO O 1º ATRIBUTO ---
    switch (opcao1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; nome_attr1 = "Populacao"; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; nome_attr1 = "Area"; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; nome_attr1 = "PIB"; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; nome_attr1 = "Pontos Turisticos"; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; nome_attr1 = "Densidade Demografica"; break;
        default: printf("Opcao invalida!\n"); return 1; // Encerra o programa se houver erro
    }

    

    // --- MENU INTERATIVO 2 (DINÂMICO) ---
    printf("\n============================\n");
    printf("   ESCOLHA O 2º ATRIBUTO: \n");
    // Só exibe a opção se ela NÃO foi a escolhida no menu 1
    if (opcao1 != 1) printf("1. Populacao\n");
    if (opcao1 != 2) printf("2. Area\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turisticos\n");
    if (opcao1 != 5) printf("5. Densidade Demografica\n");
    printf("============================\n");
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Erro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

    // --- CARREGANDO O 2º ATRIBUTO ---
    switch (opcao2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; nome_attr2 = "Populacao"; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; nome_attr2 = "Area"; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; nome_attr2 = "PIB"; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; nome_attr2 = "Pontos Turisticos"; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; nome_attr2 = "Densidade Demografica"; break;
        default: printf("Opcao invalida!\n"); return 1;
    }

    // --- CÁLCULO DA SOMA DOS ATRIBUTOS ---
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    // --- EXIBIÇÃO CLARA DOS RESULTADOS ---
    printf("\n\n====== RESULTADO DA BATALHA ======\n");
    printf("Carta 1 (%s) vs Carta 2 (%s)\n\n", nomeCidade1, nomeCidade2);
    
    printf("--- Atributo 1: %s ---\n", nome_attr1);
    printf("%s: %.2f\n", nomeCidade1, valor1_carta1);
    printf("%s: %.2f\n", nomeCidade2, valor1_carta2);
    
    printf("\n--- Atributo 2: %s ---\n", nome_attr2);
    printf("%s: %.2f\n", nomeCidade1, valor2_carta1);
    printf("%s: %.2f\n", nomeCidade2, valor2_carta2);

    printf("\n--- SOMA DOS ATRIBUTOS ---\n");
    printf("%s: %.2f\n", nomeCidade1, soma_carta1);
    printf("%s: %.2f\n", nomeCidade2, soma_carta2);

    printf("\n==================================\n");
    
    // --- LÓGICA DE VITÓRIA COM OPERADOR TERNÁRIO E IF/ELSE ---
    // Verificamos se há empate primeiro
    if (soma_carta1 == soma_carta2) {
        printf("RESULTADO FINAL: EMPATE!\n");
    } else {
        // Se não for empate, usamos o Operador Ternário para decidir quem ganhou!
        // Lê-se: "Se a soma 1 for maior que a soma 2, imprime Cidade 1. Senão (:), imprime Cidade 2."
        printf("RESULTADO FINAL: %s VENCEU!\n", (soma_carta1 > soma_carta2) ? nomeCidade1 : nomeCidade2);
    }
    printf("==================================\n");

    return 0;
}