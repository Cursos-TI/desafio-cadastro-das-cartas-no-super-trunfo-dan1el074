#include <stdio.h>

int main() {
    int opcao;
    int mostrarMenu = 1;

    char estado1;
    char codigoDaCarta1[4];
    char nomeCidade1[20];
    // unsigned long int populacao1;
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;
    // float superPoder1;

    char estado2;
    char codigoDaCarta2[4];
    char nomeCidade2[20];
    // unsigned long int populacao2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    // float superPoder2;

    int comparacao;

    printf("SUPER TRUNFO - CIDADES\n");

    // Cadastro da primeira carta
    printf("\n----- Cadastro da cidade 1 -----\n");
    printf("Digite o código do estado [A-H]: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    /* 
        - espaço antes de "%3[^\n]" serve para não pegar o que o último scanf deixou
        - essa sintaxe diz que o scanf só pode pegar 3 caracteres, e que para no "\n" (enter)
    */
    scanf(" %3[^\n]", codigoDaCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", nomeCidade1);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapta1 = pib1 * 1000000000 / populacao1;
    // superPoder1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapta1 + (densidadePopulacional1 * -1);

    // visualização da primera carta
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    // printf("População: %lu\n", populacao1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta1);
    // printf("Super poder: %.2f\n", superPoder1);

    // Cadastro da segunda carta
    printf("\n----- Cadastro da cidade 2 -----\n");
    printf("Digite o código do estado [A-H]: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf(" %3[^\n]", codigoDaCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %19[^\n]", nomeCidade2);

    printf("Digite o número de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = pib2 * 1000000000 / populacao2;
    // superPoder2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapta2 + (densidadePopulacional2 * -1);

    // Visualização da segunda carta
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    // printf("População: %lu\n", populacao2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta2);
    // printf("Super poder: %.2f\n", superPoder2);

    /*
        // Resultado das comparações
        printf("\n----- Comparação de Cartas -----\n");

        comparacao = populacao1 > populacao2;
        printf("População: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = area1 > area2;
        printf("Área: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = pib1 > pib2;
        printf("PIB: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = pontosTuristicos1 > pontosTuristicos2;
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = densidadePopulacional1 < densidadePopulacional2;
        printf("Densidade Populacional: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = pibPerCapta1 > pibPerCapta2;
        printf("PIB per Capita: Carta %d venceu (%d)\n", comparacao ? 1, comparacao : 2, comparacao);

        comparacao = superPoder1 > superPoder2;
        printf("Super Poder: Carta %d venceu (%d)\n\n", comparacao ? 1, comparacao : 2, comparacao);
    */

    /*
        // Resultado das comparações 2
        printf("\n----- Comparação de cartas (População)----- \n\n");
        printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);

        if(populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n\n", nomeCidade2);
        }
    */

    // Resultado das comparações 3
    while(mostrarMenu) {
        printf("\n----- Hora de Jogar -----\n");
        printf("1- Comparar população\n");
        printf("2- Comparar área\n");
        printf("3- Comparar PIB\n");
        printf("4- Comparar Pontos Turísticos\n");
        printf("5- Comparar Densidade Populacional\n");
        printf("6- Sair\n");

        printf("\nEscolha um opção: ");
        scanf(" %d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nComparando população\n");
                printf("%s: %d\n", nomeCidade1, populacao1);
                printf("%s: %d\n", nomeCidade2, populacao2);

                if (populacao1 > populacao2) {
                    printf("> %s venceu!\n", nomeCidade1);
                } 
                if (populacao1 < populacao2){
                    printf("> %s venceu!\n", nomeCidade2);
                }
                if (populacao1 == populacao2) {
                    printf("> Empate!\n");
                }
                break;

            case 2:
                printf("\nComparando área\n");
                printf("%s: %.2f\n", nomeCidade1, area1);
                printf("%s: %.2f\n", nomeCidade2, area2);

                if (area1 > area2) {
                    printf("> %s venceu!\n", nomeCidade1);
                } 
                if (area1 < area2){
                    printf("> %s venceu!\n", nomeCidade2);
                }
                if (area1 == area2) {
                    printf("> Empate!\n");
                }
                break;

            case 3:
                printf("\nComparando PIB\n");
                printf("%s: %.2f\n", nomeCidade1, pib1);
                printf("%s: %.2f\n", nomeCidade2, pib2);

                if (pib1 > pib2) {
                    printf("> %s venceu!\n", nomeCidade1);
                } 
                if (pib1 < pib2){
                    printf("> %s venceu!\n", nomeCidade2);
                }
                if (pib1 == pib2) {
                    printf("> Empate!\n");
                }
                break;

            case 4:
                printf("\nComparando pontos turísticos\n");
                printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d\n", nomeCidade2, pontosTuristicos2);

                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("> %s venceu!\n", nomeCidade1);
                } 
                if (pontosTuristicos1 < pontosTuristicos2){
                    printf("> %s venceu!\n", nomeCidade2);
                }
                if (pontosTuristicos1 == pontosTuristicos2) {
                    printf("> Empate!\n");
                }
                break;
            
            case 5:
                printf("\nComparando densidade populacional\n");
                printf("%s: %.2f\n", nomeCidade1, densidadePopulacional1);
                printf("%s: %.2f\n", nomeCidade2, densidadePopulacional2);

                if (densidadePopulacional1 < densidadePopulacional2) {
                    printf("> %s venceu!\n", nomeCidade1);
                } 
                if (densidadePopulacional1 > densidadePopulacional2){
                    printf("> %s venceu!\n", nomeCidade2);
                }
                if (densidadePopulacional1 == densidadePopulacional2) {
                    printf("> Empate!\n");
                }
                break;
            
            case 6:
                mostrarMenu = 0;
                break;

            default:
                printf("> Número inválido!\n");
        }
    }

    return 0;
}
