#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Declaração das variáveis
    char est, est2;
    char cod[4], cod2[4], cidade[20], cidade2[20];
    int pop, pop2, np, np2;
    float area, area2, pib, pib2;

    //Inserção de dados da primeira carta
    printf("\nInsercao de dados da Carta 1.\n");
    //Estado
    printf("Digite a letra que represente o estado.\n");
    scanf(" %c", &est);
    //Codigo
    printf("\nDigite agora o codigo do estado, contendo a letra do estado mais dois algarismos.\n");
    scanf("%3s", &cod);
    //Cidade
    printf("\nDigite o nome do da Cidade.\n");
    scanf("%*c%[^\n]%*c", &cidade);
    //Número da população
    printf("\nDigite o numero de habitantes da cidade.\n");
    scanf("%d", &pop);
    //Área da cidade
    printf("\nDigite a area da cidade em quilometros quadrados.\n");
    scanf("%f", &area);
    //PIB da cidade
    printf("\nDigite o Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib);
    //PIB da cidade
    printf("\nDigite a quantidade de pontos turisticos na cidade.\n");
    scanf("%d", &np);

    //Inserção de dados da segunda carta
    printf("\nInsercao de dados da Carta 2.\n\n");
    //Estado
    printf("Digite a letra que represente o estado.\n");
    scanf(" %c", &est2);
    //Codigo
    printf("\nDigite agora o codigo do estado, contendo a letra do estado mais dois algarismos.\n");
    scanf("%3s", &cod2);
    //Cidade
    printf("\nDigite o nome do da Cidade.\n");
    scanf("%*c%[^\n]%*c", &cidade2);
    //Número da população
    printf("\nDigite o numero de habitantes da cidade.\n");
    scanf("%d", &pop2);
    //Área da cidade
    printf("\nDigite a area da cidade em quilometros quadrados.\n");
    scanf("%f", &area2);
    //PIB da cidade
    printf("\nDigite o Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib2);
    //PIB da cidade
    printf("\nDigite a quantidade de pontos turisticos na cidade.\n");
    scanf("%d", &np2);


    //Impressão das cartas
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", est);
    printf("Codigo: %s\n", cod);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", pop);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", np);

    //Impressão das cartas
    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", est2);
    printf("Codigo: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", np2);

    return 0;
}
