/*8. Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa.
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$
1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu
salário total.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float salafixo,valorv;

    printf("Escreva seu salario fixo:\n");
    scanf("%f",&salafixo);
    printf("Escreva valor total dos itens vendidos:\n");
    scanf("%f",&valorv);

    if (valorv>0 && valorv<=1500)
    {
        printf("salario total:%.2f\n",salafixo+valorv/100*3);
    }else if (valorv>1500)
    {
        printf("salario total;%.2f\n",salafixo+valorv/100*5);
    }else{
        printf("salario total:%.2f\n",salafixo+valorv);
    }
    
    
    system("PAUSE");
    return 0;
}