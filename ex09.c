/*9. Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito.
Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
Também testar se saldo atual for maior ou igual a zero escrever a mensagem
'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float numcontclient,saldo,debit,credit,saldoatual;

    printf("Escreva o numero da sua conta:\n");
    scanf("%f",&numcontclient);
    printf("Escreva saldo:\n");
    scanf("%f",&saldo);
    printf("Escreva debito:\n");
    scanf("%f",&debit);
    printf("Escreva credito:\n");
    scanf("%f",&credit);

    printf("conta de numero %.f:Saldo atual:%2.f\n",numcontclient, saldoatual=saldo-debit+credit);
    if (saldoatual>0)
    {
        printf("SALDO POSITIVO\n");
    }else if (saldoatual<0)
    {
        printf("SALDO NEGATIVO\n");
    }else{
        printf("SALDO ZERADO\n");
    }
    
    
    system("PAUSE");
    return 0;
}