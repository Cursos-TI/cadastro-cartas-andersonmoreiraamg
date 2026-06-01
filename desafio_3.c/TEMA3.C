#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolhaJogador, escolhaComputador;
    srand (time(0));

printf("*** jogo jokenpó ***\n");
printf("escolha uma opção:\n");
printf("1. pedra\n");
printf("2. papel\n");
printf("3. tesoura\n");
printf("escolha: ");
scanf("%d", &escolhaJogador);

escolhaComputador = rand() % 3 + 1;

switch (escolhaJogador)
{
case 1:
    printf("jogador: pedra -\n");
    break;
case 2:
    printf("jogador: papel -\n");
    break;
case 3:
    printf("jogador: tesoura -\n");
    break;
default:
    printf("opção inválida\n");
    break;
}

switch (escolhaComputador)
{
case 1:
    printf("computador: pedra -\n");
    break;
case 2:
    printf("computador: papel -\n");
    break;
case 3:
    printf("computador: tesoura -\n");
    break;
}
if (escolhaJogador < 1 || escolhaJogador > 3) {
    printf("Opção inválida!\n");
} else if (escolhaJogador == escolhaComputador)
{ printf("### JOGO EMPATOU!! ###\n");
} else if  ((escolhaJogador == 1) && (escolhaComputador == 3)  ||
            (escolhaJogador == 2) && (escolhaComputador == 1)  ||
            (escolhaJogador == 3) && (escolhaComputador == 2))
{
    printf("PARABÉNS, VOCÊ GANHOU!\n");
} else {
    printf("VOCÊ PERDEU!\n");
}

}







/*
if (escolhaJogador == escolhaComputador)
{
    printf("### JOGO EMPATOU!! ###\n");
    } else if  ((escolhaJogador == 1) && (escolhaComputador == 3)  ||
    (escolhaJogador == 2) && (escolhaComputador == 1)  ||
    (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("PARABÉNS, VOCÊ GANHOU!\n");
        } else {
            printf("VOCÊ PERDEU!\n");*/
           
