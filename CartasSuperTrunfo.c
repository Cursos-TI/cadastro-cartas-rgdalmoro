#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      int populacao, numero_de_pontos_turisticos;
      float area, PIB;
      char codigo[4], UF[3], nome_da_cidade[51];
  // Área para entrada de dados
        printf("Digite o Código da Carta:");
        scanf ( "%s", codigo);
        printf("\nDigite a UF:");
        scanf ( "%s", UF);
        printf("\nDigite o nome da cidade:");
        scanf ( "%s",nome_da_cidade);
        printf("\nDigite o número de habitantes:");
        scanf ( "%i",&populacao);
        printf("\nDigite a área em km2:");
        scanf ( "%f",&area);
        printf("\nDigite o PIB:");
        scanf ( "%f",&PIB);        
        printf("\nDigite o número de pontos turísticos:");
        scanf ( "%d",&numero_de_pontos_turisticos);
  // Área para exibição dos dados da cidade
        printf("\nCódigo da Carta: %s\n", codigo);
        printf("UF: %s\n", UF);
        printf("Cidade: %s\n", nome_da_cidade);
        printf("Número de Habitantes: %i\n", populacao);
        printf("Area em km2: %f\n", area);
        printf("PIB: %f\n", PIB);
        printf("Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

return 0;

} 
