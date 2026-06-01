#include <stdio.h>

int main() {
    //CARTA 01
 char estado1 = 'F';
    char codigo1[20] = "F01";
    char nome1[20] = "fortaleza";
     int populacao1 = 12325000;
    float area_em_km1= 1521.11;
    float pib1 = 699.28;
    int numeros_de_pontos_turisticos1 = 50;
    float  densidade_populacional1;
    long double pib_per_capita1;
    long double superPoder1;
    
    // CARTA 02
    char estado2 = 'B';
    char codigo2[20] = "B02";
    char nome2[20] = "Bahia";
    int populacao2 = 6748000;
    float area_em_km2 = 1200.25;
    float pib2 = 300.50;
    int numeros_de_pontos_turisticos2 = 30;
    float densidade_populacional2;
    long double pib_per_capita2;
    long double superPoder2;
    
    
    int resultado, pontos1, pontos2;
    
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


densidade_populacional1 = (float)populacao1 / area_em_km1;
pib_per_capita1 = ((long double)pib1 * 1000000000) / (long double)populacao1;
superPoder1 = (long double)populacao1 + area_em_km1 + pib1 + 
(long double) numeros_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);


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




densidade_populacional2 = (float)populacao2 / area_em_km2;
pib_per_capita2 = ((long double)pib2 * 1000000000) / (long double)populacao2;
long double superPoder2 = (long double)populacao2 + area_em_km2 + pib2 + (long double) numeros_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

int populacao = populacao1 > populacao2;
int area= area_em_km1 > area_em_km2;
int PIB = pib1 > pib2;
int pontos = numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2;
int densidade= densidade_populacional1 < densidade_populacional2;
int per_capita= pib_per_capita1 > pib_per_capita2;
resultado = superPoder1 > superPoder2; 


resultado = superPoder1 > superPoder2;
  // Área para exibição dos dados da cidade (SAÍDA)

  //        (---CARTA 01---)
                   printf("---DADOS DA CARTA 01---\n");
  printf("estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("nome: %s\n", nome1);
  printf("populacao: %d\n", populacao1);
  printf("KM: %.2f\n", area_em_km1);
  printf("PIB: %.2f\n", pib1);
  printf("pontos turisticos: %d\n",numeros_de_pontos_turisticos1);
  printf("densidade populacional: %.2f\n",densidade_populacional1);
  printf("PIB per capita: %.2lf\n",pib_per_capita1);
  printf("super poder1: %.2lf\n", superPoder1);

  //       (---CARTA 02---)
                   printf("---DADOS DA CARTA 2---\n");
  printf("estado: %c\n", estado2);
  printf("codigo: %s\n", codigo2);
  printf("nome: %s\n", nome2);
  printf("populacao: %d\n", populacao2);
  printf("KM: %.2f\n", area_em_km2);
  printf("PIB: %.2f\n", pib2);
  printf("pontos turisticos: %d\n", numeros_de_pontos_turisticos2);
  printf("densidade populacional: %.2f\n", densidade_populacional2);
  printf("PIB per capita: %.2lf\n",pib_per_capita2);
  printf("super poder2: %.2lf\n", superPoder2);

  printf("escolha um atrbuto: \n");
  printf("1 - população\n");
  printf("2 - area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Populacional\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super Poder\n");
  scanf("%d", &resultado);
 
    if (resultado == 1) {
        if (populacao1 > populacao2) {
            printf("carta 1 venceu!\n");
        }else if (populacao1 < populacao2) {
            printf("Carta 2 venceu!\n");
         } else {
            printf("Empate!\n");
         }
   }if (resultado == 2) {
        if(area_em_km1 > area_em_km2) {
          printf("carta 1 venceu!\n");
         } else if(area_em_km1 < area_em_km2) {
          printf("carta 2 venceu!\n");
          } else {
          printf("empate!\n");
        }
        }if (resultado == 3) {
            if(pib1 > pib2) {
             printf("carta 1 venceu!\n");
          } else if(pib1 < pib2) {
             printf("carta 2 venceu!\n");
           } else {
             printf("empate\n");
           }      
    }if (resultado == 4){
        if(numeros_de_pontos_turisticos1 > numeros_de_pontos_turisticos2) {
          printf("carta 1 venceu!\n");
         } else if (numeros_de_pontos_turisticos1 < numeros_de_pontos_turisticos2) {
          printf("carta 2 venceu!\n");
          } else {
          printf("empate!\n");
          }
    }if (resultado== 5) {
        if(densidade_populacional1 < densidade_populacional2) {
          printf("carta 1 venceu\n");
          }  else if(densidade_populacional1 > densidade_populacional2) {
          printf("carta 2 venceu!");
        } else {
          printf("empate!");
        }
    }if(resultado == 6){
        if(pib_per_capita1 > pib_per_capita2) {
          printf("carta 1 venceu\n");
         } else if(pib_per_capita1 < pib_per_capita2) {
          printf("carta 2 venceu!\n");
          } else {
          printf("empate!");
          }
    }if (resultado == 7){
        if(superPoder1 > superPoder2) {
          printf("carta 1 venceu!");
         } else if(superPoder1 < superPoder2) {
          printf("carta 2 venceu!\n1");
          } else {
          printf("invalida!\n");
    }

return 0;


}