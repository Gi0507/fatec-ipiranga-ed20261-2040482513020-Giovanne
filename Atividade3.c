#include <stdio.h>
int i=1
typedef struct {
    int num;
    struct nome;
    int floatsaldo;
}conta

void nova_conta(String nome){
    conta.num=i;
    conta.nome=nome;
    saldo=500;
    i++;
}

void deposito(conta *c,int valor){ 
    if(valor>0){
        c->saldo=c->saldo+valor;
        printf("Deposito realizado com sucesso"); 
    }else{
        printf("operação impossivel");
    }
}

void saque(conta *c,int valor){ 
    if((valor<0) ){
        c.s->aldo-=valor;
        printf("Saque realizado com sucesso"); 
    }else{
        printf("operação impossivel");
    }
}

void imprimir_saldo(conta *c){
    printf("saldo=%i", c->saldo);
}
int main()
{
    int=q;
    int valor;
    while(q!=0){
        printf("Selecionr a operação a ser execultada:\n1_saque\n2Deposito\nMostrar saldo");
        switch (q){
            case 1:
                printf("Digite seu numero de conta e o valor a ser saque:");
                scanf("%i%i",&q &valor):
                saque(q,valor);
                break;
            case 2:
                printf("Digite seu numero de conta e o valor a ser depositado:");
                scanf("%i%i",&q &valor):
                deposito(q,valor);
                break;
            case 3:
                printf("informe o numero da sua conta:");
                scanf("%i",q);
                imprimir_saldo(q);
                break;
        }
        
    }
}