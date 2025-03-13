#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigoDaCarta1[4], codigoDaCarta2[4];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapta1, pibPerCapta2;

    int comparacao;
    int opcao1, opcao2;
    float valor1, valor2, valor3, valor4;
    int resultado1, resultado2;
    int mostrarMenu = 1;

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

    // visualização da primera carta
    printf("\n----- Carta 1 -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta1);

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

    // Visualização da segunda carta
    printf("\n----- Carta 2 -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta2);

    // Resultado das comparaçõe
    while(mostrarMenu) {
        printf("\n----- Hora de Jogar -----\n");
        printf("1- Comparar população\n");
        printf("2- Comparar área\n");
        printf("3- Comparar PIB\n");
        printf("4- Comparar Pontos Turísticos\n");
        printf("5- Comparar Densidade Populacional\n");
        printf("6- Sair\n");

        printf("\nEscolha a primeira opção: ");
        scanf(" %d", &opcao1);

        if(opcao1 == 6) {
            mostrarMenu = 0;
            continue;
        }
        
        printf("Escolha a segunda opção: ");
        scanf(" %d", &opcao2);

        printf("\n");

        if(opcao1 == opcao2) {
            printf("> Os números não podem ser os mesmos!\n");
            continue;
        }
    
        switch(opcao1) {
            case 1:
                valor1 = (float) populacao1;
                valor2 = (float) populacao2;

                if (populacao1 > populacao2) {
                    resultado1 = 1;
                } 
                if (populacao1 < populacao2){
                    resultado1 = 2;
                }
                if (populacao1 == populacao2) {
                    resultado1 = 0;
                }
                break;

            case 2:
                valor1 = (float) area1;
                valor2 = (float) area2;

                if (area1 > area2) {
                    resultado1 = 1;
                } 
                if (area1 < area2){
                    resultado1 = 2;
                }
                if (area1 == area2) {
                    resultado1 = 0;
                }
                break;

            case 3:
                valor1 = (float) pib1;
                valor2 = (float) pib2;

                if (pib1 > pib2) {
                    resultado1 = 1;
                } 
                if (pib1 < pib2){
                    resultado1 = 2;
                }
                if (pib1 == pib2) {
                    resultado1 = 0;
                }
                break;

            case 4:
                valor1 = (float) pontosTuristicos1;
                valor2 = (float) pontosTuristicos2;

                if (pontosTuristicos1 > pontosTuristicos2) {
                    resultado1 = 1;
                } 
                if (pontosTuristicos1 < pontosTuristicos2){
                    resultado1 = 2;
                }
                if (pontosTuristicos1 == pontosTuristicos2) {
                    resultado1 = 0;
                }
                break;
            
            case 5:
                valor1 = (float) densidadePopulacional1;
                valor2 = (float) densidadePopulacional2;

                if (densidadePopulacional1 > densidadePopulacional2) {
                    resultado1 = 1;
                } 
                if (densidadePopulacional1 < densidadePopulacional2){
                    resultado1 = 2;
                }
                if (densidadePopulacional1 == densidadePopulacional2) {
                    resultado1 = 0;
                }
                break;
            
            case 6:
                mostrarMenu = 0;
                continue;
                break;

            default:
                printf("> Número inválido!\n");
                continue;
        }

        switch(opcao2) {
            case 1:
                valor3 = (float) populacao1;
                valor4 = (float) populacao2;

                if (populacao1 > populacao2) {
                    resultado2 = 1;
                } 
                if (populacao1 < populacao2){
                    resultado2 = 2;
                }
                if (populacao1 == populacao2) {
                    resultado2 = 0;
                }
                break;

            case 2:
                valor3 = (float) area1;
                valor4 = (float) area2;

                if (area1 > area2) {
                    resultado2 = 1;
                } 
                if (area1 < area2){
                    resultado2 = 2;
                }
                if (area1 == area2) {
                    resultado2 = 0;
                }
                break;

            case 3:
                valor3 = (float) pib1;
                valor4 = (float) pib2;

                if (pib1 > pib2) {
                    resultado2 = 1;
                } 
                if (pib1 < pib2){
                    resultado2 = 2;
                }
                if (pib1 == pib2) {
                    resultado2 = 0;
                }
                break;

            case 4:
                valor3 = (float) pontosTuristicos1;
                valor4 = (float) pontosTuristicos2;

                if (pontosTuristicos1 > pontosTuristicos2) {
                    resultado2 = 1;
                } 
                if (pontosTuristicos1 < pontosTuristicos2){
                    resultado2 = 2;
                }
                if (pontosTuristicos1 == pontosTuristicos2) {
                    resultado2 = 0;
                }
                break;
            
            case 5:
                valor3 = (float) densidadePopulacional1;
                valor4 = (float) densidadePopulacional2;

                if (densidadePopulacional1 > densidadePopulacional2) {
                    resultado2 = 1;
                } 
                if (densidadePopulacional1 < densidadePopulacional2){
                    resultado2 = 2;
                }
                if (densidadePopulacional1 == densidadePopulacional2) {
                    resultado2 = 0;
                }
                break;
            
            case 6:
                mostrarMenu = 0;
                continue;
                break;

            default:
                printf("> Número inválido!\n");
                continue;
        }

        switch (opcao1) {
            case 1:
                printf("Calculando população");
                break;
            
            case 2:
                printf("Calculando área");
                break;
            
            case 3:
                printf("Calculando PIB");
                break;
            
            case 4:
                printf("Calculando pontos turísticos");
                break;
            
            case 5:
                printf("Calculando densidade populacional");
                break;
        }

        printf("\n%s: %.2f\n", nomeCidade1, valor1);
        printf("%s: %.2f\n", nomeCidade2, valor2);

        if(!resultado1) {
            printf("> Empatou\n\n");
        } else {
            printf("> %s ganhou!\n\n", resultado1 == 1 ? nomeCidade1 : nomeCidade2);
        }

        switch (opcao2) {
            case 1:
                printf("Calculando população");
                break;
            
            case 2:
                printf("Calculando área");
                break;
            
            case 3:
                printf("Calculando PIB");
                break;
            
            case 4:
                printf("Calculando pontos turísticos");
                break;
            
            case 5:
                printf("Calculando densidade populacional");
                break;
        }

        printf("\n%s: %.2f\n", nomeCidade1, valor3);
        printf("%s: %.2f\n", nomeCidade2, valor4);
        
        if(!resultado2) {
            printf("> Empatou\n\n");
        } else {
            printf("> %s ganhou!\n\n", resultado2 == 1 ? nomeCidade1 : nomeCidade2);
        }

        // Visualização da soma final
        printf("Soma da carta 1: %.2f\n", valor1 + valor3);
        printf("Soma da carta 2: %.2f\n", valor2 + valor4);
        printf(">> A carta %s VENCEU!!!\n\n\n", (valor1 + valor3) > (valor2 + valor4) ? nomeCidade1 : nomeCidade2);

        mostrarMenu = 0;
    }

    return 0;
}
