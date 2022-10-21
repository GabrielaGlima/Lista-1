/*2. Dado um número inteiro, exibir seu sucessor e antecessor.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,ant=0,suc=0;

    printf("escreva um numero:\n");
    scanf("%d",&n);

    printf("numero inserido:%d\n", n);
    printf("antecessor:%d\n",n-1);
    printf("sucessor:%d\n",n+1);

    system("PAUSE");
    return 0;
}