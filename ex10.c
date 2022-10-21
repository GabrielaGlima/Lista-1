/*10. Dada uma quantidade de horas, exibir a valor equivalente em minutos, segundos
e milissegundos.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int h;
    printf("escreva um total de horas:\n");
    scanf("%lld",&h);

    printf("%lld horas tem:%lld minutos\n",h,h*60);
    printf("%lld horas tem:%lld segundos\n",h,h*3600);
    printf("%lld horas tem:%lld milissegundos\n",h,h*3600000);
    
 system("PAUSE");
 return 0;
}