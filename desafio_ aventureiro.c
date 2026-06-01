#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {



/*printf("digite a sua idade:\n");
scanf("%d", &idade);
printf("digite a sua renda: \n");
scanf("%f", &renda);

if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
        printf("você está qualifcade para o desconto especial!\n");
    } else {
        printf("você não esta qualificade para o desconto especial!\n");
    }
} else {
    printf("você não esta qualificado para o desconto devido a idade!\n");
}



printf("digite a sua idade: \n");
scanf("%d", &idade);
printf("digite a sua renda: \n");
scanf("%f", &renda);
printf("digete o numero de dependentes: \n");
scanf("%d", &dependentes);


if (idade >= 18 && idade <= 65) {
    if(renda < 3000.0) {
      if(dependentes > 2) {
          printf("você esta qualificado para o beneficio social!\n");
        } else {
        printf("Você não está qualificado para os benefícios devido ao numero de dependentes!\n");
        }
    }  else {
        printf("Você não está qualificado para os benefícios devido à renda!\n");
    }
    } else {
    printf("Você não está qualificado para os benefícios devido à idade!\n");
} 


int opcao;
float saldo = 1000.00;
printf ("escolha uma opção!\n");
printf("1. verificar saldo:\n");
printf("2. fazer depósito:\n");
printf("3. fazer saque:\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    printf("seu saldo é R$ %.2f\n", saldo);
    break;
case 2:
    printf("digite o seu banco:\n");
    break;
case 3:
    printf("digite o lavor:\n");
    break;
default:
    printf("opção invalida!\n");
    break;
} 
 
int dia;

printf("escolha um dia da semana: \n");
scanf("%d", &dia);

if (dia == 1) {
    printf("segunda-feira\n!");
} else if (dia == 2) {
    printf("terça-feira!\n");
} else if (dia == 3) {
    printf("quarta feira!\n");
} else if (dia == 4) {
    printf("quinta-feira!\n");
} else if (dia == 5) {
    printf("sexta feira!\n");
} else if (dia == 6) {
    printf("sábado!\n");
} else if (dia == 7) {
    printf("domingo!\n");
} else {
    printf("opção invalida!\n");
} 



int dia;

printf("escolha um dia da semana:\n");
scanf("%d", &dia);


switch (dia) {
case 1:
    printf("domingo\n");
    break;
case 2:
    printf("seginda\n");
    break;
case 3:
    printf("terça\n");
    break;
case 4:
    printf("quarta\n");
    break;
case 5:
    printf("quinta\n");
    break;
case 6:
    printf("sexta\n");
    break;
case 7:
    printf("sábado\n");
    break;
default:
    printf("opção inválida\n");
    break;
}*/

int opcao, numeroSecreto, palpite;
int regras;
  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

 
  switch (opcao) {
case 1:
    srand (time(0));
numeroSecreto = rand() % 10;
    printf("digite um número de (0 até 9) ");
    scanf("%d", &palpite);
if (numeroSecreto == palpite) {
    printf("numero secreto: %d\n", numeroSecreto);
    printf("Parabéns, você acertou!\n");
} else {
    printf("numero secreto %d\n" ,numeroSecreto);
    printf("você errou!\n");
}
break;
case 2:
    printf("regras do jogo...\n");
    printf("acessar menu de regras(1 ou 2)!\n");
    scanf("%d", &regras);
switch (regras) {
case 1:
    printf("regra 1:\n");
    break;
case 2:
    printf("regra 2:\n");
break;
default: 
    printf("opção invalida!");
break;
}
break;
case 3:
    printf(" saindo..\n");
break;
default:
    printf("opção invalida, tente novamente!\n");
break;
}
 










return 0;
}






