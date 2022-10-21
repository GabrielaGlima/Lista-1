/*5. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e
dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano
com 365 dias e mês com 30 dias.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dt,ano,mes,dia;
    
    printf("dia que nasceu:");
    scanf("%d",&dia);
    printf("mes que nasceu:");
    scanf("%d",&mes);
    printf("ano que nasceu:");
    scanf("%d",&ano);

    ano = 2022 - ano;
    mes *= 30;
    ano *= 365;
    dt = mes + ano + dia;

    printf("voce tem: %d dias de vida.\n",dt);

    system("PAUSE");
    return 0;
}