#include <stdio.h>
#include <stdlib.h>

int main () {

    // Declaração das variáveis das cidades
    int pontos_turisticos, pontos_turisticos2;
    double area_cidade, populacao_cidade, area_cidade2, populacao_cidade2;
    double super_poder, super_poder2;
    double densidade_pop, PIB_percap, PIB_cidade;
    double densidade_pop2, PIB_percap2, PIB_cidade2;


    // Dados da primeira cidade inseridos pelo usuário e armazenado na memória
    printf("Digite a populacao da primeira cidade: ");
    scanf("%lf", &populacao_cidade);
    printf("Digite a area da primeira cidade: ");
    scanf("%lf", &area_cidade);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%lf", &PIB_cidade);
    printf("Digite o numero de pontos turisticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);

    // Atribuição das funcionalidades de densidade pop. e pib per capita da primeira cidade
    densidade_pop = (populacao_cidade / area_cidade);
    PIB_percap = (PIB_cidade / populacao_cidade);

    // Impressão de todos os dados da primeira cidade
    printf("\n---- DADOS DA PRIMEIRA CIDADE ----\n");
    printf("Populacao: %.2lf\n", populacao_cidade);
    printf("Area: %.2lf\n", area_cidade);
    printf("PIB: %.2lf\n", PIB_cidade);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    printf("PIB per Capita: %.2lf\n", PIB_percap);
    printf("Densidade Populacional: %.2lf\n\n", densidade_pop);

    // Dados da segunda cidade inseridos pelo usuário e armazenado na memória
    printf("Digite a populacao da segunda cidade: ");
    scanf("%lf", &populacao_cidade2);
    printf("Digite a area da segunda cidade: ");
    scanf("%lf", &area_cidade2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%lf", &PIB_cidade2);
    printf("Digite o numero de pontos turisticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Atribuição das funcionalidades de densidade pop. e pib per capita da segunda cidade
    densidade_pop2 = (populacao_cidade2 / area_cidade2);
    PIB_percap2 = (PIB_cidade2 / populacao_cidade2);

    // Impressão de todos os dados da segunda cidade
    printf("\n---- DADOS DA SEGUNDA CIDADE ----\n");
    printf("Populacao: %.2lf\n", populacao_cidade2);
    printf("Area: %.2lf\n", area_cidade2);
    printf("PIB: %.2lf\n", PIB_cidade2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: %.2lf\n", PIB_percap2);
    printf("Densidade Populacional: %.2lf\n\n", densidade_pop2);
    
    // Atribuição da funcionalidade do super poder
    super_poder = (populacao_cidade + area_cidade + PIB_cidade + pontos_turisticos);
    super_poder2 = (populacao_cidade2 + area_cidade2 + PIB_cidade2 + pontos_turisticos2);

    if (densidade_pop < densidade_pop2)
    {
        printf("A primeira cidade e a vencedora no quesito densidade populacional com %lf pontos!\n", densidade_pop);
    } else { 
        printf ("A segunda cidade e a vencedora no quesito densidade populacional com %lf pontos!\n", densidade_pop2);
    }
    if (super_poder > super_poder2)
    {
        printf("A primeira cidade e a vencedora no quesito super poder com %.2lf pontos!\n", super_poder);
    } else { 
        printf("A segunda cidade e a vencedora no quesito super poder com %.2lf pontos!\n", super_poder2);
    }

    system ("pause");
    return 0;
}