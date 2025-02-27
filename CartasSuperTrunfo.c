#include <stdio.h>

int main() {
    char estado1;
    char codigoDaCarta1[4];
    char nomeCidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigoDaCarta2[4];
    char nomeCidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("SUPER TRUNFO - CIDADES\n");

    // Cadastro da primeira carta
    printf("\n----- Cadastro da cidade 1 -----\n");
    printf("Digite o código do estado [A-H]: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %3[^\n]s", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]s", nomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // visualização da primera carta
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\n----- Cadastro da cidade 2 -----\n");
    printf("Digite o código do estado [A-H]: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %3[^\n]s", codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]s", nomeCidade2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // visualização da segunda carta
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
