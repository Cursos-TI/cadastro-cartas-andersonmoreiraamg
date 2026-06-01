#include <stdio.h>

int main() {
// declarando a variavel da função!
// é inportante montar o codigo na sequência exata!
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("entre com o numero 1: \n");
scanf("%d", &numero1);
printf("entre com o numero 2: \n");
scanf("%d", &numero2);
// operadores matemaicos (atribuição)!
soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;
//(---EXIBIÇÃO DE DADOS---)
printf("a soma é: %d\n", soma);
printf("a subtração é: %d\n", subtracao);
printf("a multiplicação é: %d\n", multiplicacao);
printf("a divisão é: %d\n", divisao);



return 0;

}