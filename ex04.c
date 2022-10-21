/*4. Desenvolva um algoritmo que leia a altura de 4 pessoas. Este programa deverá
mostrar.
a) A menor altura;
b) A maior altura.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float alt,maior,menor;
    int i;
    
    for(i=1;i<=4;i++){
        printf("Escreva sua altura;\n");
        scanf("%f",&alt);
    
    if (i == 1){
        menor = alt;
        maior = alt;
    }
    else{
        if(menor>alt){
           menor=alt;
        }
        if(maior<alt){
           maior=alt;
        }
      }
    }
    printf("maior altura:%.2f\n",maior);
    printf("menor altura:%.2f\n",menor);

    system("PAUSE");
    return 0;
}