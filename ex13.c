/*13. Elabore um algoritmo que, dada a idade de um nadador, classifique-o e uma das
seguintes categorias:
• Infantil A: 5 – 7 anos
• Infantil B: 8 – 10 anos
• Juvenil A: 11 – 13 anos
• Juvenil B: 14 – 17 anos
• Sênior: maiores de 18 anos*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int idaden=0;

    printf("escreva a idade no nadador:\n");
    scanf("%d", &idaden);

    if (idaden>5 && idaden<7)
    {
        printf("Infantil A: 5 a 7 anos\n");
    }else if (idaden>=8 && idaden<=10)
    {
        printf("Infantil B: 8 a 10 anos\n");
    }else if (idaden>=11 && idaden<=13)
    {
        printf("Juvenil A: 11 a 13 anos\n");
    }else if (idaden>=14 && idaden<=17)
    {
        printf("Juvenil B: 14 a 17 anos\n");
    }else if (idaden>=18)
    {
        printf("Senior: maiores de 18 anos\n");
    }else{
        printf("Pessoas com essa idade nao podem competir\n");
    }
    
    system("PAUSE");
    return 0;    
}
