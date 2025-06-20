/*
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
Feito por:
Jenny Macedo (Matricula 202408684797)
*/
#include <stdio.h>
#include <stdbool.h>

int main (){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char codigoCarta[3]; 
    char nomeCidade[20];  
    int populacao;
    float area;
    float pib;
    int numeroPontosTuristicos;

    //////////////////////////////////////////////

    char estado2;
    char codigoCarta2[3]; 
    char nomeCidade2[20];  
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;

    //////////////////////////////////////////////

    printf("Digite o estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigoCarta);

    printf("Digite o nome da Cidade: ");
    scanf("%s", &nomeCidade);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    
    printf("Digite o tamanho da area: ");
    scanf("%f", &area);

    printf("Digite o Pib: ");
    scanf("%f", &pib);
    
    printf("Digite os pontos Turisticos: ");
    scanf("%d", &numeroPontosTuristicos);

    //////////////////////////////////////////////
    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da Cidade:");
    scanf("%s", &nomeCidade2);

    printf("Digite a populacao:");
    scanf("%d", &populacao2);
    
    printf("Digite o tamanho da area:");
    scanf("%f", &area2);

    printf("Digite o Pib:");
    scanf("%f", &pib2);
    
    printf("Digite os pontos Turisticos:");
    scanf("%d", &numeroPontosTuristicos2);
    
    //////////////////////////////////////////////
    printf("\n");
    
    printf("Carta: 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n",codigoCarta);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("Populacao: %d\n",populacao);
    printf("Area: %f km2\n", area);
    printf("PIB: %f bilhoes de reais\n",pib);
    printf("Numero de Pontos Turisticos: %d\n",numeroPontosTuristicos);

    //////////////////////////////////////////////
    printf("\n\n");

    printf("Carta: 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n",codigoCarta2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",numeroPontosTuristicos2);

    //////////////////////////////////////////////

    return 0;
}