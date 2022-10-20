#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0, cont1 = 0,cont2 = 0,cont3 = 0,
    cont4 = 0;

    printf("digite um numero:\n");
    scanf("%d", &n);
    while (n > -1){
        if (n <= 25)
            cont1++;
        else if (n <= 50)
            cont2++; 
        else if (n <= 75)
            cont3++;
        else if (n <= 100)
            cont4++;
        
        printf("digite um numero:\n");
        scanf("%d", &n);
        
    }
    printf("%d\n%d\n%d\n%d\n",cont1,cont2,cont3,cont4);

    system("PAUSE");
    return 0;
}