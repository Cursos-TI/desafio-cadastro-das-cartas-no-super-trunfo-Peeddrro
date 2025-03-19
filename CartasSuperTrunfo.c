#include <stdio.h>

int main(){

    //variaveis
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    char estado, estado2, codigo_carta[5], codigo_carta2[5], nome_cidade[50], nome_cidade2[50];
    float area, area2, pib, pib2;
    float densidade, densidade2, pib_capita, pib_capita2;
    float Spoder1, Spoder2;
    int escolha_jogador;
   
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


    //Menu Interativo
    printf("\nSELECAO DE ATRIBUTO\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o atributo a ser comparado: ");
    scanf("%d", &escolha_jogador);
 
    printf("\nRESULTADO\n");
    printf("%s X %s\n", nome_cidade, nome_cidade2);

    switch (escolha_jogador) {
    case 1:
        printf("Atributo - População\n");
        break;
    case 2:
        printf("Atributo - Área\n");
        break;
    case 3:
        printf("Atributo - PIB\n");
        break;
    case 4:
        printf("Atributo - Número de Pontos Turísticos\n");
        break;
    case 5:
        printf("Atributo - Densidade Demográfica\n");
        break;
    default:
        printf("Escolha invalida.\n");
        break;
    }

    
    if (escolha_jogador == 1){
        printf("Carta 1 - População: %d\nCarta 2 - População: %d\n", populacao, populacao2);
    }
    else if (escolha_jogador == 2){
        printf("Carta 1 - Área: %.2f\nCarta 2 - Área: %.2f\n", area, area2);
    }
    else if (escolha_jogador == 3){
        printf("Carta 1 - PIB: %.2f\nCarta 2 - PIB: %.2f\n", pib, pib2);
    }
    else if (escolha_jogador == 4){
        printf("Carta 1 - Número de Pontos Turísticos: %.2f\nCarta 2 - Número de Pontos Turísticos: %.2f\n", pontos_turisticos, pontos_turisticos2);
    }
    else if (escolha_jogador == 5){
        printf("Carta 1 - Densidade Demográfica: %.2f\nCarta 2 - Densidade Demográfica: %.2f\n", densidade, densidade2);
    }

    
    if (escolha_jogador == 1 || escolha_jogador == 2 || escolha_jogador == 3 || escolha_jogador == 4 || escolha_jogador == 5){
        if (populacao > populacao2 || area > area2 || pib > pib2 || pontos_turisticos > pontos_turisticos2 || densidade < densidade2){
            printf("CARTA 1 É A VENCEDORA\n");
        } else if (populacao < populacao2 || area < area2 || pib < pib2 || pontos_turisticos < pontos_turisticos2 || densidade > densidade2){
            printf("CARTA 2 É A VENCEDORA\n");
        } else if (populacao == populacao2 || area == area2 || pib == pib2 || pontos_turisticos == pontos_turisticos2 || densidade == densidade2){
            printf("EMPATE\n");
        }
    } else {
        printf("Por favor, reinicie o programa\n");
    }


    
}