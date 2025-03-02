#include <stdio.h>

int main(){

    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    char estado, estado2, codigo_carta[5], codigo_carta2[5], nome_cidade[50], nome_cidade2[50];
    float area, area2, pib, pib2;

    printf("Carta 1\n");

    printf("Insira a letra que representa o Estado: ");
    scanf(" %c", &estado); //O espaço antes do formato serve para o scanf ignorar os espaços em branco.

    printf("Insira o Codigo da Carta: ");
    scanf(" %s", &codigo_carta);

    printf("Insira o Nome da Cidade: ");
    scanf(" %s", &nome_cidade);

    printf("Insira o Numero de Habitantes: ");
    scanf(" %d", &populacao);

    printf("Insira a Area da Cidade: ");
    scanf(" %f", &area);

    printf("Insira o PIB da Cidade: ");
    scanf(" %f", &pib);
   

    printf("Insira quantos Pontos Turisticos existem na Cidade: ");
    scanf(" %d", &pontos_turisticos);
 


    printf("\nCarta 2\n");


    printf("Insira a letra que representa o Estado: ");
    scanf(" %c", &estado2);

    printf("Insira o Codigo da Carta: ");
    scanf(" %s", &codigo_carta2);

    printf("Insira o Nome da Cidade: ");
    scanf(" %s", &nome_cidade2);

    printf("Insira o Numero de Habitantes: ");
    scanf(" %d", &populacao2);

    printf("Insira a Area da Cidade: ");
    scanf(" %f", &area2);

    printf("Insira o PIB da Cidade: ");
    scanf(" %f", &pib2);
    
    printf("Insira quantos Pontos Turisticos existem na Cidade: ");
    scanf(" %d", &pontos_turisticos2);
   


    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f quilometros quadrados\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);

    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f quilometros quadrados\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}