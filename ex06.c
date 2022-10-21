/*6. Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere
que as idades dos homens serão sempre diferentes entre si, bem como as das
mulheres). Calcule e escreva a soma das idades do homem mais velho com a
mulher mais nova, e o produto das idades do homem mais novo com a mulher
mais velha.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int h1,h2,m1,m2,maiorm=0,menorm=0,maiorh=0,menorh=0;

    do{
     printf("escreva a idade de dois homens:\n");
     scanf("%d%d",&h1,&h2);
    }while (h1==h2);
    do{
     printf("escreva a idade de duas mulheres:\n");
     scanf("%d%d",&m1,&m2);
    }while (m1==m2);
    if (h1>h2){
        maiorh=h1;
    }else{
        maiorh=h2;
    }if (h1<h2){
        menorh=h1;
    }else{
        menorh=h2;
    }if (m1>m2){
        maiorm=m1;
    }else{
        maiorm=m2;
    }if (m1<m2){
        menorm=m1;
    }else{
        menorm=m2;
    }

    printf("soma da idade do homem mais velho com a mulher mais nova:%d\n",maiorh+menorm);
    printf("produto da idade do homem mais novo com a mulher mais velha:%d\n",menorh*maiorm);
    
    system("PAUSE");
    return 0;
}