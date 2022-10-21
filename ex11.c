/*11. Faça um programa em C que calcule e mostre o valor do rendimento e o valor
total depois do rendimento, sabendo-se que o valor de depósito foi de R$ 500,00
e o valor da taxa de juros foi de 3%.
• Rendimento = depósito * taxaJuros/100
• valorTotal = depósito + rendimento*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   float rend,
   depo=500,
   taxa=3,
   valort=0;


   printf("O valor do rendimento foi:%.2f\n",rend=depo*taxa/100);
   printf("O valor total e:%.2f\n",valort=depo+rend);

   system("PAUSE");
   return 0;
}