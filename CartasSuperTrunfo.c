#include <stdio.h>

int main() {
    // código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4];
    char nome[20];
    int populacao;
    int area;
    float pib;
    int pontosTuristicos;
    
    printf("---- Super Trunfo - cadastro de cidades ----\n");
    printf("Código da cidade (A-H, 01-04): ");
    scanf("%s", &codigo);

    printf("Nome: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (km²): ");
    scanf("%d", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
   
    printf("\n---- Dados da cidade ----\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %d km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}

// --- Dados da cidade ----
// Código: B01
// Cidade: Erechim
// População: 105705
// Área: 429164 km²
// PIB: R$ 5859841.00
// Pontos turísticos: 1
