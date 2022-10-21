/*1. Faça um programa em C que realize a troca de dois números informados pelo
usuário.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,aux=0;

    printf("escreva o primeiro numero:\n");
    scanf("%d",&n1);
    printf("escreva o segundo numero:\n");
    scanf("%d",&n2);

    aux = n1;
    n1 = n2;
    n2 = aux;

    printf("o primeiro numero agora e: %d\n",n1);
    printf("o segundo numero agora e: %d\n",n2);

    system("PAUSE");
    return 0;
}