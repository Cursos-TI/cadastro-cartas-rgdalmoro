#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
      int populacao, numero_de_pontos_turisticos;
      float area, PIB;
      char codigo[3],nome_da_cidade[50];
  // Área para entrada de dados
        printf("Digite o Código da Carta:\n");
        scanf ( "%s", codigo);

  // Área para exibição dos dados da cidade
        printf("Código da Carta: %s\n", codigo);

return 0;

} 
