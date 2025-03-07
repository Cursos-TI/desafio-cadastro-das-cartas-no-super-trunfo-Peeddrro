#include <stdio.h>

int main(){

    //variaveis
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    char estado, estado2, codigo_carta[5], codigo_carta2[5], nome_cidade[50], nome_cidade2[50];
    float area, area2, pib, pib2;
    float densidade, densidade2, pib_capita, pib_capita2;
   
    //entrada de dados
    printf("Carta 1\n");

    printf("Insira a letra que representa o Estado: ");
    scanf(" %c", &estado); 

    printf("Insira o Código da Carta: ");
    scanf("%s", codigo_carta); //Por algum motivo esse erro não aparece no VSCode local, apenas aqui no Git.

    printf("Insira o Nome da Cidade: ");
    scanf("%s", nome_cidade);

    printf("Insira o Número de Habitantes: ");
    scanf("%d", &populacao);

    printf("Insira a Área da Cidade: ");
    scanf("%f", &area);

    printf("Insira o PIB da Cidade: ");
    scanf("%f", &pib);
   

    printf("Insira quantos Pontos Turísticos existem na Cidade: ");
    scanf("%d", &pontos_turisticos);
 


    printf("\nCarta 2\n");


    printf("Insira a letra que representa o Estado: ");
    scanf(" %c", &estado2);

    printf("Insira o Código da Carta: ");
    scanf("%s", codigo_carta2);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", nome_cidade2);

    printf("Insira o Número de Habitantes: ");
    scanf("%d", &populacao2);

    printf("Insira a Área da Cidade: ");
    scanf("%f", &area2);

    printf("Insira o PIB da Cidade: ");
    scanf("%f", &pib2);
    
    printf("Insira quantos Pontos Turísticos existem na Cidade: ");
    scanf("%d", &pontos_turisticos2);
   
    
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    pib_capita = (float) pib / populacao;
    pib_capita2 = (float) pib2 / populacao2;

    //exibicao carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_capita);

    //exibicao carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    return 0;
}