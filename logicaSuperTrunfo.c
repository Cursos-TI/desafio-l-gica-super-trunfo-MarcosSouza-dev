#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis da carta 1
    char estado1[3];
    char codigocarta1[5];
    char nomecidade1[50];
    int populacao1;
    float area_km1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis da carta 2
    char estado2[3];
    char codigocarta2[5];
    char nomecidade2[50];
    int populacao2;
    float area_km2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados - carta 1
    printf("=== Cadastro da Carta 01 ===\n");
    printf("Estado (sigla): ");
    scanf(" %s", estado1);
    printf("Código da carta: ");
    scanf(" %s", codigocarta1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km2): ");
    scanf("%f", &area_km1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados - carta 2
    printf("\n=== Cadastro da Carta 02 ===\n");
    printf("Estado (sigla): ");
    scanf(" %s", estado2);
    printf("Código da carta: ");
    scanf(" %s", codigocarta2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km2): ");
    scanf("%f", &area_km2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area_km1;
    float densidade2 = populacao2 / area_km2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados calculados
    printf("\n=== DADOS CALCULADOS ===\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f\n", densidade1, pib_per_capita1);
    printf("Carta 2 - Densidade Populacional: %.2f hab/km² | PIB per capita: %.2f\n", densidade2, pib_per_capita2);

    // Escolha fixa do atributo para comparação
    printf("\n=== Comparação de Cartas (Atributo: PIB) ===\n");
    printf("Carta 1 - %s (%s): R$ %.2f\n", nomecidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): R$ %.2f\n", nomecidade2, estado2, pib2);

    // Comparação usando if/else
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (pib2 > pib1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

