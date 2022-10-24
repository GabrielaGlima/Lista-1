/*19. calcule o fatorial de um número. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
   int fat,i,n,cont;

    printf("insira um valor para calcular seu fatorial:\n");
    scanf("%d", &n);

    fat=1;
    for ( i = n; i > 1; i--){
    fat*=i;
    }
    
    
    printf("%d!=%d\n",n,fat);
    printf("%d", cont);
    
    system("PAUSE");
    return 0;
}