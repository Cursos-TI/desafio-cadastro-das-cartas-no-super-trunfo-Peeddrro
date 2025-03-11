#include <stdio.h>

int main(){

    //variaveis
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    char estado, estado2, codigo_carta[5], codigo_carta2[5], nome_cidade[50], nome_cidade2[50];
    float area, area2, pib, pib2;
    float densidade, densidade2, pib_capita, pib_capita2;
    float Spoder1, Spoder2;
   
    //entrada de dados
    printf("Carta 1\n");

    printf("Insira a letra que representa o Estado: ");
    scanf(" %c", &estado); 
    printf("Insira o Código da Carta: ");
    scanf("%s", codigo_carta); 
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
   
    //calculos
    densidade = (float) populacao / area;
    densidade2 = (float) populacao2 / area2;
    pib_capita = (float) populacao / pib;
    pib_capita2 = (float) populacao2 / pib2;
    Spoder1 = (float) (populacao + area + pib + pontos_turisticos + pib_capita) / densidade;
    Spoder2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) / densidade2;



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
    printf("Super Poder: %.2f\n", Spoder1);

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
    printf("Super Poder: %.2f\n", Spoder2);


    //comparacao 

    /*printf("\nComparacao de Cartas:\n");
    printf("Populacao: %d\n", populacao > populacao2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade < densidade2);
    printf("PIB per Capita: %d\n", pib_capita > pib_capita2);
    printf("Super Poder: %d\n", Spoder1 > Spoder2);*/

    //comparacao com estrutura de decisao

    printf("\nComparacao de Cartas (Atributo: Area):\n");
    printf("Carta 1 - %s: %.2fkm²\n", nome_cidade, area);
    printf("Carta 2 - %s: %.2fkm²\n", nome_cidade2, area2);

    if (area > area2){
        printf("Carta 1 VENCEU");
    }
    else{
        printf("Carta 2 VENCEU");
    }





}