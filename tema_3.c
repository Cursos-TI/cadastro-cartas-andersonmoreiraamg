#include <stdio.h>

int main () {

float temperatura, umidade;
unsigned int estoque, estoqueMinimo = 1000;

printf("entre com a temperatura: \n");
   scanf("%f", &temperatura);
printf("entre com a unidade: \n");
   scanf("%f", &umidade);
printf("entre com o estoque: \n");
   scanf("%u", &estoque);

if (temperatura > 30) {
   printf("temperatura alta!\n");
} else {
   printf("temperatura normal!\n");
}
if (umidade > 50) {
   printf("unidade elevada!\n");
} else {
   printf("umidade normal!\n");
}
if (estoque < estoqueMinimo){
   printf("estoque abaixo que o minimo!\n");
} else {
   printf("estoque normal!\n");
}


}
