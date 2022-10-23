/*18. Dado um número inteiro no formato CDU, exibir o número no formato UDC.
Exemplo: 123, será 321. O número deverá ser exibido em uma variável antes de
ser exibido.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int u,c,d,aux,n,inver;
    printf("escreva o numero para ser inverdido (valor deve conter apenas 3 numeros)\n");
    scanf("%d", &n);

    c=n/100;
    aux=n-(c*100);
    d=aux/10;
    u=n-((c*100)+(d*10));
    inver=(u*100)+(d*10)+(c);

    printf("%d\n", inver);

    system("PAUSE");
    return 0;
}