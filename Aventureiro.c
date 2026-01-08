#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado01[20], estado02[20];
    char codigo01[20], codigo02[20];
    char cidade01[30], cidade02[30];

    int populacao01, populacao02;
    int turistico01, turistico02;

    float area01, area02;
    float pib01, pib02;

    float densidade01, densidade02;
    float pibPerCapita01, pibPerCapita02;

    // Entrada da carta 01
    printf("Carta 01:\n");

    printf("Informe o estado: ");
    scanf("%s", estado01);

    printf("Informe o codigo: ");
    scanf("%s", codigo01);

    printf("Informe a cidade: ");
    scanf("%s", cidade01);

    printf("Informe a populacao: ");
    scanf("%d", &populacao01);

    printf("Informe a area: ");
    scanf("%f", &area01);

    printf("Informe o PIB: ");
    scanf("%f", &pib01);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &turistico01);

    // Entrada da carta 02
    printf("\nCarta 02:\n");

    printf("Informe o estado: ");
    scanf("%s", estado02);

    printf("Informe o codigo: ");
    scanf("%s", codigo02);

    printf("Informe a cidade: ");
    scanf("%s", cidade02);

    printf("Informe a populacao: ");
    scanf("%d", &populacao02);

    printf("Informe a area: ");
    scanf("%f", &area02);

    printf("Informe o PIB: ");
    scanf("%f", &pib02);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &turistico02);

    // Cálculos
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

    pibPerCapita01 = pib01 / populacao01;
    pibPerCapita02 = pib02 / populacao02;

    // Saída da carta 01
    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("Populacao: %d\n", populacao01);
    printf("Area: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Numero de Pontos Turisticos: %d\n", turistico01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita01);

    // Saída da carta 02
    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Numero de Pontos Turisticos: %d\n", turistico02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita02);

    return 0;
}
