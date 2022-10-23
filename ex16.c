/*16. Criar um programa que efetue o cálculo da quantidade de litros de combustível
gastos em uma viagem, sabendo-se que o carro faz 12km com um litro. Deverão
ser fornecidos o tempo gasto na viagem a velocidade média. O programa deverá
apresentar a distância percorrida e a quantidade de litros de combustível
utilizados na viagem.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int kmlitro = 12;
    float tempviagem,vmedia,distancia,consumo;

    printf("Escreva o tempo gasto na viagem em horas:\n");
    scanf("%f", &tempviagem);

    printf("Escreva a velocidade media(hm/h)\n");
    scanf("%f", &vmedia);

    printf("A distancia percorida foi:%.1f\n", distancia = tempviagem * vmedia);
    printf("A quantidade de combustivel utilizado na viagem foi:%.1f\n",consumo = distancia/kmlitro);


    system("PAUSE");
    return 0;
}