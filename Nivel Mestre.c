#include <stdio.h>

int main() {

    // ===== CARTAS PRE-CADASTRADAS =====
    char pais1[20] = "Brasil";
    char pais2[20] = "Canada";

    int populacao1 = 203000000;
    int populacao2 = 38000000;

    float area1 = 8515767;
    float area2 = 9984670;

    float pib1 = 1847;
    float pib2 = 2137;

    // ===== CALCULOS =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;

    float atributo1Carta1 = 0;
    float atributo1Carta2 = 0;
    float atributo2Carta1 = 0;
    float atributo2Carta2 = 0;

    char nomeAtributo1[30];
    char nomeAtributo2[30];

    printf("=== SUPER TRUNFO ===\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    // ===== PRIMEIRO MENU =====
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            atributo1Carta1 = populacao1;
            atributo1Carta2 = populacao2;
            sprintf(nomeAtributo1, "Populacao");
            break;
        case 2:
            atributo1Carta1 = area1;
            atributo1Carta2 = area2;
            sprintf(nomeAtributo1, "Area");
            break;
        case 3:
            atributo1Carta1 = pib1;
            atributo1Carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            atributo1Carta1 = densidade1;
            atributo1Carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== SEGUNDO MENU (DINAMICO) =====
    printf("\nEscolha o SEGUNDO atributo:\n");
    if (escolha1 != 1) printf("1 - Populacao\n");
    if (escolha1 != 2) printf("2 - Area\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) {
        printf("Erro: voce nao pode repetir o atributo!\n");
        return 0;
    }

    switch (escolha2) {
        case 1:
            atributo2Carta1 = populacao1;
            atributo2Carta2 = populacao2;
            sprintf(nomeAtributo2, "Populacao");
            break;
        case 2:
            atributo2Carta1 = area1;
            atributo2Carta2 = area2;
            sprintf(nomeAtributo2, "Area");
            break;
        case 3:
            atributo2Carta1 = pib1;
            atributo2Carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            atributo2Carta1 = densidade1;
            atributo2Carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade");
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== SOMA =====
    float somaCarta1 = atributo1Carta1 + atributo2Carta1;
    float somaCarta2 = atributo1Carta2 + atributo2Carta2;

    // ===== RESULTADO =====
    printf("\n=== RESULTADO ===\n");
    printf("Paises: %s x %s\n\n", pais1, pais2);

    printf("Atributos usados: %s e %s\n\n", nomeAtributo1, nomeAtributo2);

    printf("%s:\n", pais1);
    printf("%s: %.2f\n", nomeAtributo1, atributo1Carta1);
    printf("%s: %.2f\n", nomeAtributo2, atributo2Carta1);
    printf("Soma: %.2f\n\n", somaCarta1);

    printf("%s:\n", pais2);
    printf("%s: %.2f\n", nomeAtributo1, atributo1Carta2);
    printf("%s: %.2f\n", nomeAtributo2, atributo2Carta2);
    printf("Soma: %.2f\n\n", somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("Vencedor: %s\n", pais1);
    else if (somaCarta2 > somaCarta1)
        printf("Vencedor: %s\n", pais2);
    else
        printf("Empate!\n");

    return 0;
}

