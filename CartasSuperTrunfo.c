#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1 = 'F';
    char codigo1[20] = "F01";
    char nome1[20] = "fortaleza";
    int populacao1 = 12325000;
    float area_em_km1= 1521.11;
    float pib1 = 699.28;
    int numeros_de_pontos_turisticos1 = 50;
    float densidade_populacional1;
    float pib_per_capita1;
    long double superPoder1;


    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome2[20] = "Bahia";
    int populacao2 = 6748000;
    float area_em_km2 = 1200.25;
    float pib2 = 300.50;
    int numeros_de_pontos_turisticos2 = 30;
    float densidade_populacional2;
    float pib_per_capita2;
    long double superPoder2;  


  // Área para entrada de dados
  printf      ("---CARTA 01---\n");
printf("escolha uma letra para o estado de (A-Z): \n");
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
scanf("%d", &numeros_de_pontos_turisticos1);


densidade_populacional1 = populacao1 / area_em_km1;
pib_per_capita1 = (pib1 * 1000000000) / populacao1;

superPoder1 = populacao1 + area_em_km1 + pib1 +
numeros_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

printf       ("---CARTA 02---\n");
printf("escolha uma letra para o estado de (A-Z): \n");
scanf(" %c", &estado2);

printf("digite o codigo da carta: \n");
scanf("%s", codigo2);

printf("digite o nome de carta: \n");
scanf("%s", nome2);

printf("digite a populacao: \n"); 
scanf("%d", &populacao2);

printf("digite a area em km: \n");
scanf("%f", &area_em_km2);

printf("digite o PIB: \n");
scanf("%f", &pib2);

printf("digite a quantidade de pontos turisticos: \n");
scanf("%d", &numeros_de_pontos_turisticos2);


densidade_populacional2 = populacao2 / area_em_km2;
pib_per_capita2 = (pib2 * 1000000000) / populacao2;

superPoder2 = populacao2 + area_em_km2 + pib2 + 
numeros_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);


  // Área para exibição dos dados da cidade

  //        (---CARTA 01---)
  printf("\n---DADOS DA CARTA 01---\n");
  printf("estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome: %s\n", nome1);
  printf("populacao: %d\n", populacao1);
  printf("KM: %.2f\n", area_em_km1);
  printf("PIB: %.2f\n", pib1);
  printf("pontos turisticos: %d\n",numeros_de_pontos_turisticos1);
  printf("densidade populacional: %.2f\n",densidade_populacional1);
  printf("PIB per capita: %.2f\n",pib_per_capita1);
  printf("super poder: %.2Lf\n", superPoder1);

  //       (---CARTA 02---)
  printf("\n---DADOS DA CARTA 2---\n");
  printf("estado: %c\n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("nome: %s\n", nome2);
  printf("populacao: %d\n", populacao2);
  printf("KM: %.2f\n", area_em_km2);
  printf("PIB: %.2f\n", pib2);
  printf("pontos turisticos: %d\n", numeros_de_pontos_turisticos2);
  printf("densidade populacional: %.2f\n", densidade_populacional2);
  printf("PIB per capita: %.2f\n",pib_per_capita2);
  printf("super poder: %.2Lf\n", superPoder2);

int opcao;

printf("\n*escolha uma opcão*\n");
printf("1 - comparar populacão\n");
printf("2 - comparar área\n");
printf("3 - comparar PIB\n");
printf("4 - comparar pontos turisticos\n");
printf("5 - comparar densidade populacional\n");
printf("6 - comparar super poder\n");
scanf("%d", &opcao); 

switch (opcao)
{
case 1:
  printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("POPULACÃO\n");
  printf("%s: %d\n", nome1, populacao1);
  printf("%s: %d\n", nome2, populacao2);
if(populacao1 != populacao2){
  if(populacao1 > populacao2){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");
} 
break;
case 2:
  printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("ÁREA\n");
  printf("%s: %.2f\n", nome1, area_em_km1);
  printf("%s: %.2f\n", nome2, area_em_km2);
if(area_em_km1 != area_em_km2){
  if(area_em_km1 > area_em_km2){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");
}
break;
case 3:
printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("PIB\n");
  printf("%s: %.2f\n", nome1, pib1);
  printf("%s: %.2f\n", nome2, pib2);
if(pib1 != pib2){
  if(pib1 > pib2){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");  
}
case 4:
printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("PONTOS TURISTICOS\n");
  printf("%s: %d\n", nome1, numeros_de_pontos_turisticos1);
  printf("%s: %d\n", nome2, numeros_de_pontos_turisticos2);
if(numeros_de_pontos_turisticos1 != numeros_de_pontos_turisticos2){
  if(numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");
}
break;
case 5:
printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("DENSIDADE POPULACIONAL\n");
  printf("%s: %.2f\n", nome1, densidade_populacional1);
  printf("%s: %.2f\n", nome2, densidade_populacional2);
if(densidade_populacional1 != densidade_populacional2){
  if(densidade_populacional1 > densidade_populacional2){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");
}
break;
case 6:
printf("\n=== COMPARACÃO DE CARTAS ===\n");
  printf("SUPER PODER\n");
  printf("%s: %.2Lf\n", nome1, superPoder1);
  printf("%s: %.2Lf\n", nome2, superPoder2);
if(superPoder1 != superPoder2){
  if(superPoder2 > superPoder1){
    printf("carta 1 venceu: %s\n", nome1);
  } else {
    printf("carta 2 venceu: %s\n", nome2);
  }
} else {
  printf("empate.\n");
}
break;
default:
  printf("opção invalida!\n");
  break;

}
return 0;
}





















