#include <stdio.h>

int main(){
    char estado, estado1;
    char fusao[5], fusao1[5];
    char cidade[50], cidade1[50];
    int cc, cc1, popula, npt, popula1, npt1;
    float area, pib, area1, pib1, pop, pop1, pibcap, pibcap1;

    // Primeira Carta
    printf("Dados da Carta 1:\n");

    //usuario colocar o estado
    printf("Coloque a letra do seu estado de A a H:\n");
    scanf(" %c",&estado);

    //validador do estado se está entre A até o H
    if (estado >= 'A' && estado <= 'H') {
        
    } else {
        printf("Estado invalido!!!\n");
    }

    //codigo da carta (01 a 04) - cc
    printf("Digite o codigo da carta:\n");
    scanf("%d",&cc);

    //validador do estado se está entre 01 até o 04
    if (cc >= 01 && cc <= 04) {
        sprintf(fusao, "%c%02d",estado,cc); //Faz uma junção de dois caracteres
    } else {
        printf("Codigo invalido!!!\n");
    }

    // codigo para informar a cidade
    printf("Digite a sua cidade:\n");
    scanf(" %[^\n]", cidade);

    // codigo para informar a população
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&popula);

    // codigo para informar a area
    printf("Digite a area da sua cidade:\n");
    scanf("%f",&area);

    // codigo do PIB
    printf("Digite o PIB da sua cidade:\n");
    scanf("%f",&pib);

    // codigo do ponto turistico
    printf("Digite a quantidade de pontos turistico da sua cidade:\n");
    scanf("%d",&npt);

    //Calculo da Densidade Populacional
    pop = popula / area;

    //Calculo do Pib com a população
    pibcap = (pib * 1000000000) / popula;

    //Segunda Carta
    printf("\n");
    printf("Dados da Carta 2:\n");

    //usuario colocar o estado
    printf("Coloque a letra do seu estado de A a H:\n");
    scanf(" %c",&estado1);

    //validador do estado se está entre A até o H
    if (estado1 >= 'A' && estado1 <= 'H') {
        
    } else {
        printf("Estado invalido!!!\n");
    }

    //codigo da carta (01 a 04) - cc
    printf("Digite o codigo da carta:\n");
    scanf("%d",&cc1);

    //validador do estado se está entre 01 até o 04
    if (cc1 >= 01 && cc1 <= 04) {
        sprintf(fusao1, "%c%02d",estado1,cc); //Faz uma junção de dois caracteres
    } else {
        printf("Codigo invalido!!!\n");
    }

    // codigo para informar a cidade
    printf("Digite a sua cidade:\n");
    scanf(" %[^\n]", cidade1);

    // codigo para informar a população
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d",&popula1);

    // codigo para informar a area
    printf("Digite a area da sua cidade:\n");
    scanf("%f",&area1);

    // codigo do PIB
    printf("Digite o PIB da sua cidade:\n");
    scanf("%f",&pib1);

    // codigo do ponto turistico
    printf("Digite a quantidade de pontos turistico da sua cidade:\n");
    scanf("%d",&npt1);

    //Calculo da Densidade Populacional
    pop1 = popula1 / area1;

    //Calculo do Pib com a população
    pibcap1 = (pib1 * 1000000000) / popula1;

    //Cartas Finalizadas
    printf("\n");
    printf("Carta 1\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f Km\nPIB: %.2f bilhoes\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capital: %.2f reais\n",estado,fusao,cidade,popula,area,pib,npt,pop,pibcap);
    printf("\n");
    printf("Carta 2\nEstado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f Km\nPIB: %.2f bilhoes\nNumero de Pontos Turisticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capital: %.2f reais\n",estado1,fusao1,cidade1,popula1,area1,pib1,npt1,pop1,pibcap1);

    return 0;
}