/*15. Dado um número entre 0 e 60, exibir seu sucessor, sabendo que no caso do
número 60 o sucessor é 0.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=0, suc60=0;

        printf("insira um numero:\n");  
        scanf("%d", &n);
    if(n>=0 && n<=60){
        if(n==60){
            printf("o sucessor do numero e:%d\n",suc60);
            return 0;
        }
            printf("o sucessor do numero e:%d\n",n+1);
            
        
    }
    else{
        while(n<0||n>60){
        printf("Valor inserido nao se encontra no intervalo de 0 a 60 insira outro valor:\n");  
        scanf("%d", &n);
            if (n==60){
                printf("o sucessor do numero e:%d\n",suc60);
                return 0;
        }
    
        printf("o sucessor do numero e:%d\n",n+1);     
            }
    }

    system("PAUSE");
    return 0;
}