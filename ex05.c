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