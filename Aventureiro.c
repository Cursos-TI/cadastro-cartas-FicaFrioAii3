#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado01[20], estado02[20];
    char codigo01[20], codigo02[20];
    char cidade01[30], cidade02[30];
    int populacao01, populacao02;
    float area01, area02;
    float pib01, pib02;
    float turistico01, turistico02;

    // Novas variáveis
    float densidade01, densidade02;
    float pibPerCapita01, pibPerCapita02;

    // Entrada da carta 01
    printf("Carta 01:\n");

    printf("Informe o primeiro estado: ");
    scanf("%s", estado01);

    printf("Informe o primeiro codigo: ");
    scanf("%s", codigo01);

    printf("Informe a primeira cidade: ");
    scanf("%s", cidade01);

    printf("Informe a primeira populacao: ");
    scanf("%d", &populacao01);

    printf("Informe a primeira area: ");
    scanf("%f", &area01);

    printf("Informe o primeiro PIB: ");
    scanf("%f", &pib01);

    printf("Informe a quantidade de turisticos: ");
    scanf("%f", &turistico01);

    // Entrada da carta 02
    printf("\nCarta 02:\n");

    printf("Informe o segundo estado: ");
    scanf("%s", estado02);

    printf("Informe o segundo codigo: ");
    scanf("%s", codigo02);

    printf("Informe a segunda cidade: ");
    scanf("%s", cidade02);

    printf("Informe a segunda populacao: ");
    scanf("%d", &populacao02);

    printf("Informe a segunda area: ");
    scanf("%f", &area02);

    printf("Informe o segundo PIB: ");
    scanf("%f", &pib02);

    printf("Informe a quantidade de turisticos: ");
    scanf("%f", &turistico02);

    // Cálculos
    densidade01 = populacao01 / area01;
    densidade02 = populacao02 / area02;

    pibPerCapita01 = pib01 / populacao01;
    pibPerCapita02 = pib02 / populacao02;

    // Saída da carta 01
    printf("\nCartas 01:\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Cidade: %s\n", cidade01);
    printf("Populacao: %d\n", populacao01);
    printf("Area: %.2f\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("Turisticos: %.2f\n", turistico01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade01);
    printf("PIB per Capita: %.2f\n", pibPerCapita01);

    // Saída da carta 02
    printf("\nCartas 02:\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", cidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Area: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Turisticos: %.2f\n", turistico02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02);
    printf("PIB per Capita: %.2f\n", pibPerCapita02);

    return 0;
}
