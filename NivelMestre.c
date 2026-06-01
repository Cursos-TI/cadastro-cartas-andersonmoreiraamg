 #include <stdio.h>

 int main() {

    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;


    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

   double valortotalA;
   double valortotalb;

   int resultadoA, resultadoB;

   printf("produto %s tem estoque %u e valor unitario é %.2f\n"), produtoA, estoqueA,valorA;
   printf("produto %s tem estoque %u e valor unitario é %.2f\n"), produtoB, estoqueB,valorA;

   resultadoA = estoqueA > estoqueminimoA;
   resultadoB = estoqueB > estoqueminimoB;

   printf("o produto %s tem valor minimom %d\n", produtoA, resultadoA);
   printf("o produto %s tem valor minimo %d\n",produtoB, resultadoB);  

   printf("o valor total de A (R$ %.2f) é maior que o valor total de B? (R$ %.2f): %d\n", 
                           estoqueA * valorA,
                           estoqueB * valorB,
                (estoqueA * valorA) > (estoqueB * valorB) );

 }