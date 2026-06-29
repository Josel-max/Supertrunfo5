#include <stdio.h>

int main() {

    // Variáveis da carta 1
    char estado1[20];
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da carta 2
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    //--- ENTRADA DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A-Z): ");
    scanf("%s", estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os Pontos Turisticos: ");
    scanf("%d", &pontos1);

    //--- EXIBIÇÃO CARTA 1 ---
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    //--- ENTRADA DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A-Z): ");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area (km2): ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf(" %d", &pontos2);

    //--- EXIBIÇÃO CARTA 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

    //--- CÁLCULO DE DENSIDADE ---
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    printf("\nCalculo da Densidade1\n");
    printf("Resultado da densidade 1 e: %.2f hab/km2\n", densidade1);

    printf("\nCalculo da Densidade2\n");
    printf("Resultado da densidade 2 e: %.2f hab/km2\n", densidade2);

    //--- CÁLCULO DO PIB PER CAPITA ---
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    printf("O PIB per capita da Cidade 1 e: %.2f\n", pib_per_capita1);
    printf("O PIB per capita da Cidade 2 e: %.2f\n", pib_per_capita2);

    //--- CÁLCULO DO SUPER PODER ---
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pib_per_capita1 + (1.0 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pib_per_capita2 + (1.0 / densidade2);

    //--- RESULTADOS ---
    printf("\n=== RESULTADOS CARTA 1 ===\n");
    printf("Cidade: %s - Estado: %s\n", cidade1, estado1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("SUPER PODER: %.2f\n", superPoder1);

    printf("\n=== RESULTADOS CARTA 2 ===\n");
    printf("Cidade: %s - Estado: %s\n", cidade2, estado2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("SUPER PODER: %.2f\n", superPoder2);

    //--- COMPARAÇÃO GERAL ---
    printf("\n=== COMPARAÇÃO DE ATRIBUTOS (1 = Carta 1 vence / 0 = Carta 2 vence) ===\n");
    printf("Populacao: Carta 1 venceu? %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu? %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu? %d\n", pib1 > pib2);
    printf("Densidade: Carta 1 venceu? %d\n", densidade1 < densidade2);
    printf("Super Poder: Carta 1 venceu? %d\n", superPoder1 > superPoder2);

    //--- EXIBIÇÃO DETALHADA ---
    printf("\nCarta 1 - Populacao: %d\n", populacao1);
    printf("Carta 2 - Populacao: %d\n", populacao2);
    if (populacao1 > populacao2)
        printf("Populacao 1 e maior que Populacao 2.\n");
    else if (populacao2 > populacao1)
        printf("Populacao 2 e maior que Populacao 1.\n");
    else
        printf("Empate em Populacao.\n");

    printf("\nCarta 1 - Area KM2: %.2f\n", area1);
    printf("Carta 2 - Area KM2: %.2f\n", area2);
    if (area1 > area2)
        printf("Area 1 e maior que Area 2.\n");
    else if (area2 > area1)
        printf("Area 2 e maior que Area 1.\n");
    else
        printf("Empate em Area.\n");

    printf("\nCarta 1 - PIB: %.2f\n", pib1);
    printf("Carta 2 - PIB: %.2f\n", pib2);
    if (pib1 > pib2)
        printf("PIB 1 e maior que PIB 2.\n");
    else if (pib2 > pib1)
        printf("PIB 2 e maior que PIB 1.\n");
    else
        printf("Empate em PIB.\n");

    printf("\nCarta 1 - Pontos Turisticos: %d\n", pontos1);
    printf("Carta 2 - Pontos Turisticos: %d\n", pontos2);
    if (pontos1 > pontos2)
        printf("Carta 1 tem mais Pontos Turisticos.\n");
    else if (pontos2 > pontos1)
        printf("Carta 2 tem mais Pontos Turisticos.\n");
    else
        printf("Empate em Pontos Turisticos.\n");

    //--- MENU DUELO (1 atributo) ---
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o atributo para o duelo: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DO DUELO ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            if (area1 > area2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            if (pib1 > pib2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            if (pontos1 > pontos2)
                printf("Carta 1 (%s) venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Carta 2 (%s) venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            if (densidade1 < densidade2)
                printf("Carta 1 (%s) venceu (menor densidade)!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Carta 2 (%s) venceu (menor densidade)!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    //--- MENU DUELO (2 atributos) ---
    int opcao1, opcao2;
    float soma1 = 0, soma2 = 0;

    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1. Populacao | 2. Area | 3. PIB | 4. Pontos Turisticos | 5. Densidade\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nERRO: Voce nao pode escolher o mesmo atributo duas vezes!\n");
    } else {
        // ✅ CALCULAR ANTES DE EXIBIR
        switch (opcao1) {
            case 1: soma1 += (float)populacao1; soma2 += (float)populacao2; break;
            case 2: soma1 += area1;              soma2 += area2;             break;
            case 3: soma1 += pib1;               soma2 += pib2;              break;
            case 4: soma1 += (float)pontos1;     soma2 += (float)pontos2;    break;
            case 5: soma1 += 1.0f / densidade1;  soma2 += 1.0f / densidade2; break;
        }
        switch (opcao2) {
            case 1: soma1 += (float)populacao1; soma2 += (float)populacao2; break;
            case 2: soma1 += area1;              soma2 += area2;             break;
            case 3: soma1 += pib1;               soma2 += pib2;              break;
            case 4: soma1 += (float)pontos1;     soma2 += (float)pontos2;    break;
            case 5: soma1 += 1.0f / densidade1;  soma2 += 1.0f / densidade2; break;
        }

        // ✅ EXIBIR DEPOIS
        printf("\n--- RESULTADO FINAL ---\n");
        printf("Soma atributos Carta 1 (%s): %.2f\n", cidade1, soma1);
        printf("Soma atributos Carta 2 (%s): %.2f\n", cidade2, soma2);

        if (soma1 > soma2)
            printf("A CARTA 1 VENCEU!\n");
        else if (soma2 > soma1)
            printf("A CARTA 2 VENCEU!\n");
        else
            printf("EMPATE TECNICO!\n");
    }

    return 0;
}