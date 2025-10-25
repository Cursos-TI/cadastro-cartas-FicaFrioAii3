#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  int populacao;
    float area, pib;
    int pontosTuristicos;

 printf("Cadastro da cidade codigo A01:\n");

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("--- Dados da Carta A01 ---\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
  // Área para exibição dos dados da cidade
printf("Cadastro da cidade código A02:\n");

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km: ");
    scanf("%f", &area);

    printf("PIB em bilhões: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados da Carta A02 ---\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);


return 0;
} 
