#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, cont;
    long long int n1, n2, n3;
    n1 = 0;
    n2 = 1;
    n3 = 1;

    printf ("Digite um numero: ");
    scanf ("%d", &n);

    for (cont = 1; cont <= n; cont ++){
        if (cont == 1){
            printf ("0\n");
            sleep(1);
    }
        else if (cont == 2){
                printf ("1\n");
                sleep(1);
    }

        else{
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;

    printf ("%lld\n", n3);
    sleep(1);
    
}
    }

    system("PAUSE");
    return 0;

}