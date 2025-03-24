#include <stdio.h>

int main(){

    //variaveis
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    char estado, estado2, codigo_carta[5], codigo_carta2[5], nome_cidade[50], nome_cidade2[50];
    float area, area2, pib, pib2;
    float densidade, densidade2, pib_capita, pib_capita2;
    float Spoder1, Spoder2;
    int escolha_atributo1, escolha_atributo2, comparacao1, comparacao2 ;
    float soma1, soma2, C1atributo1, C1atributo2, C2atributo1, C2atributo2;
   
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
    pib_capita = (float) pib / populacao;
    pib_capita2 = (float) pib2 / populacao2;
    Spoder1 = (float) (populacao + area + pib + pontos_turisticos + pib_capita) / densidade;
    Spoder2 = (float) (populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) / densidade2;


    //Menu Interativo / Escolha atributo 1
    printf("\nSELECAO DE ATRIBUTO\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o atributo a ser comparado: ");
    scanf("%d", &escolha_atributo1);

   
    switch (escolha_atributo1) {
        case 1:
            printf("Atributo 1 selecionado...\n");
            //comparacao1 = populacao > populacao2 ? 1 : ((populacao < populacao2) ? -1 : 0) ;
            C1atributo1 = populacao;
            C2atributo1 = populacao2;
            break;
        case 2:
            printf("Atributo 1 selecionado...\n");
            //comparacao1 = area > area2 ? 1 : ((area < area2) ? -1 : 0);
            C1atributo1 = area;
            C2atributo1 = area2;
            break;
        case 3:
            printf("Atributo 1 selecionado...\n");
            //comparacao1 = pib > pib2 ? 1 : ((pib < pib2) ? -1 : 0);
            C1atributo1 = pib;
            C2atributo1 = pib2;
            break;
        case 4:
            printf("Atributo 1 selecionado...\n");
            //comparacao1 = pontos_turisticos > pontos_turisticos2 ? 1 : ((pontos_turisticos < pontos_turisticos2) ? -1 : 0);
            C1atributo1 = pontos_turisticos;
            C2atributo1 = pontos_turisticos2;
            break;
        case 5:
            printf("Atributo 1 selecionado...\n");
           //comparacao1 = densidade < densidade2 ? 1 : ((densidade > densidade2) ? -1 : 0);
           C1atributo1 = densidade;
           C2atributo1 = densidade2;
            break;
        default:
            printf("Entrada invalida... Por Favor reinicie o programa\n");
            
            return 1; //Encerra o Programa
    }
   
    //Escolha do Atributo2
    printf("Escolha o atributo 2: ");
    scanf("%d", &escolha_atributo2);
    
    if (escolha_atributo1 == escolha_atributo2){
        printf("Atributo Repetido");
    } else{
        switch (escolha_atributo2) {
            case 1:
                printf("Atributo 2 selecionado...\n");
                //comparacao2 = populacao > populacao2 ? 1 : ((populacao < populacao2) ? -1 : 0);
                C1atributo2 = populacao;
                C2atributo2 = populacao2;
                break;
            case 2:
                printf("Atributo 2 selecionado...\n");
                //comparacao2 = area > area2 ? 1 :((area < area) ? -1 : 0);
                C1atributo2 = area;
                C2atributo2 = area2;
                break;
            case 3:
                printf("Atributo 2 selecionado...\n");
                //comparacao2 = pib > pib2 ? 1 : ((pib < pib2) ? -1 : 0);
                C1atributo2 = pib;
                C2atributo2 = pib2;
                break;
            case 4:
                printf("Atributo 2 selecionado...\n");
                //comparacao2 = pontos_turisticos > pontos_turisticos2 ? 1 : ((pontos_turisticos < pontos_turisticos2) ? -1 : 0);
                C1atributo2 = pontos_turisticos;
                C2atributo2 = pontos_turisticos2;
                break;
            case 5:
                printf("Atributo 2 selecionado...\n");
                //comparacao2 = densidade < densidade2 ? 1 : ((densidade > densidade2) ? -1 : 0);
                C1atributo2 = densidade;
                C2atributo2 = densidade2;
                break;
            default:
                printf("Entrada invalida...Por Favor reinicie o programa\n");
                
                return 1;
        }
    }

    printf("\nRESULTADO\n");
    printf("\n%s X %s\n", nome_cidade, nome_cidade2);
    
    switch (escolha_atributo1){
    case 1:
        printf("\nAtributo 1: População\n");
        printf("Carta 1: %d\nCarta 2: %d\n", populacao, populacao2);
        break;
    case 2:
        printf("\nAtributo 1: Area\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f", area, area2);
        break;
    case 3:
        printf("\nAtributo 1: PIB\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f", pib, pib2);
        break;
    case 4:
        printf("\nAtributo 1: Pontos Turisticos\n");
        printf("Carta 1: %d\nCarta 2: %d", pontos_turisticos, pontos_turisticos2);
        break;
    case 5:
        printf("\nAtributo 1: Densidade Populacional\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f", densidade, densidade2);
    }

    switch (escolha_atributo2){
        case 1:
        printf("\nAtributo 2: População\n");
        printf("Carta 1: %d\nCarta 2: %d\n", populacao, populacao2);
        break;
    case 2:
        printf("\nAtributo 2: Area\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f", area, area2);
        break;
    case 3:
        printf("\nAtributo 2: PIB\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f", pib, pib2);
        break;
    case 4:
        printf("\nAtributo 2: Pontos Turisticos\n");
        printf("Carta 1: %d\nCarta 2: %d", pontos_turisticos, pontos_turisticos2);
        break;
    case 5:
        printf("\nAtributo 2: Densidade Populacional\n");
        printf("Carta 1: %.2f\nCarta 2: %.2f\n\n", densidade, densidade2);
        break;
    }

    printf("\n\nTotal Carta 1: %.2f\n", soma1 = C1atributo1 + C1atributo2);
    printf("Total Carta 2: %.2f\n", soma2 = C2atributo1 + C2atributo2);

    if (soma1 > soma2){
        printf("\nCARTA 1 É A VENCEDORA\n");
    }
    else if (soma1 < soma2){
        printf("\nCARTA 2 É A VENCEDORA\n");
    } else{
        printf("\nEMPATE\n");
    }


}