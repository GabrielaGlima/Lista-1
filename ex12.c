/*12. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o
percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Sabe-se que o preço de fábrica do automóvel é: R$ 35.000,00; o percentual do
lucro do distribuidor é de: 25%; e o percentual de imposto é de: 15%. Faça um
programa em C que mostre:
• O valor correspondente ao lucro do distribuidor (lucroDistribuidor =
precoFabrica * percentualDistribuidor/100)
• O valor correspondente aos impostos (valorImposto = precoFabrica *
percentualImposto / 100)
• O preço final do veículo (precoFinal = precoFabrica + lucroDistribuidor +
valorImposto)*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   float
   lucrod=0, 
   precdist=25,
   precofa=35000,
   impa=15,
   valorimpo=0,
   porcimpo=15,
   precof=0;


   printf("O lucro do distruidor foi:%.2f\n", lucrod=precofa*precdist/100);
   printf("O valor correspondente aos impostos:%2.f\n", valorimpo=precofa*porcimpo/100);
   printf("o preco final do veiculo:%.2f\n", precof=precofa+lucrod+valorimpo);

   system("PAUSE");
   return 0;
}