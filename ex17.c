/*17. Dado o peso de uma pessoa em quilos, exibir o valor do peso em grama*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float pesok=0;

    printf("Escreva seu peso:\n");
    scanf("%f", &pesok);

    printf("Seu peso em grama e:%.f\n", pesok*=1000);

    system("PAUSE");
    return 0;
}