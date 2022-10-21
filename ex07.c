/*7. Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que
cada um representa em relação ao total de eleitores.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float nte,vtb,vtn,vtv;

    printf("Escreva o numero total de eleitores:\n");
    scanf("%f",&nte);
    printf("Escreva o numero total de votos brancos:\n");
    scanf("%f",&vtb);
    printf("Escreva o numero total de votos nulos:\n");
    scanf("%f",&vtn);
    printf("Escreva o numero total de votos validos:\n");
    scanf("%f",&vtv);  
   
   
    if (nte==vtb+vtn+vtv){
        printf("percentual de votos brancos:%.1f%%\n",vtb/nte*100);
        printf("percentual de votos nulos:%.1f%%\n",vtn/nte*100);
        printf("percentual de votos validos:%.1f%%\n",vtv/nte*100);
    }else{
        printf("os valores escritos nao batem com o total de eleitores");
    }
    
    
    system("PAUSE");
    return 0;
}