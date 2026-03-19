#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1 = 'F';
    char codigo1[20] = "F01";
    char nome1[20] = "fortaleza";
    int populacao1 = 1234567;
    float area_em_km1= 1521.11;
    float pib1 = 699.28;
    int numeros_de_pontos_turist1 = 50;


    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome2[20] = "Brasilia";
    int populacao2 = 6748000;
    float area_em_km2 = 1200.25;
    float Pib2 = 300.50;
    int numeros_de_pontos_turis2 = 30;


  // Área para entrada de dados
  //      (---CARTA 01---)
printf("escolha uma letra para o estado: \n");
scanf(" %c", &estado1);

printf("digite o codigo da carta: \n");
scanf("%s", codigo1);

printf("digite o nome da carta: \n");
scanf("%s", nome1);

printf("digite a populacao: \n");
scanf("%d", &populacao1);

printf("digite a area em km: \n");
scanf("%f", &area_em_km1);

printf("digite o PIB: \n");
scanf("%f", &pib1);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &numeros_de_pontos_turist1);
//        (---CARTA 02---)
printf("escolha uma letra para o estado: \n");
scanf(" %c", &estado2);

printf("digite o codigo da carta: \n");
scanf("%s", codigo2);

printf("digite seu nome: \n");
scanf("%s", nome2);

printf("digite a populacao: \n");
scanf("%d", &populacao2);

printf("digite a area em km: \n");
scanf("%f", &area_em_km2);

printf("digite o PIB: \n");
scanf("%f", &Pib2);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &numeros_de_pontos_turist1);

  // Área para exibição dos dados da cidade
  //        (---CARTA 01---)
  printf("---DADOS DA CARTA 01---\n");
  printf("estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome: %s\n", nome1);
  printf("populacao: %d\n", populacao1);
  printf("KM: %.2f\n", area_em_km1);
  printf("PIB: %.2f\n", pib1);

  //       (---CARTA 02---)
  printf("---DADOS DA CARTA 2---\n");
  printf("estado: %c\n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("nome: %s\n", nome2);
  printf("populacao: %d\n", populacao2);
  printf("KM: %.2f\n", area_em_km2);
  printf("PIB: %.2f\n", Pib2);

return 0;
} 
