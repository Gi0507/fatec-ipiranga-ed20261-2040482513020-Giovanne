Atividade 02
 1- Qual o valor de y no final do programa?
#include <stdio.h>
main()
{
int y, *p, x;
y = 0;
p = &y;
x = *p;
x = 4;
++(*p);
x–;
(*p) += x++;
printf (“y = %d\n”, y);
}
R:y=4


2-Teste e explique a diferença, caso exista, entre
p++; (*p)++; *(++p);
A) p++:soma um no endereço apontado pelo ponteiro 
(*p)++:soma um no valor da variavel
*(++p):acessa a variave doseguinte possição seguinte de um array
b) O que quer dizer *(p+10)? 
Somar 10 ao endereço 10 do ponteiro
3-Quais serão os valores de x, y e p ao final do trecho de código
abaixo?
int x, y, *p;y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
–x;
(*p) += x;
R:x=4,y=5,p=&y
4-Os programas (trechos de código) abaixo possuem erros. Qual(is)?
Como deveriam ser?
a)colocou ponteiro parav acessar a possição do vlaor da variavel(p=x), quando deveria acessar o endereço da variavel(p=&x
void main() {
int x, *p;
x = 100;
p = x;
printf(“Valor de p: %d.\n”, *p);}
b) temp é um ponteiro que não aponta para lugar estanciado a melhor forma seria ultilizar uma variavel no lugar do ponteiro
void troca (int *i, int *j) {
int *temp;
*temp = *i;
*i = *j;
*j = *temp;}
c)a e b deveria ser arawai e não ponteiros
char *a, *b;
a = “abacate”;
b = “uva”;
if (a < b)
printf (“%s vem antes de %s no dicionário”, a, b);
else
printf (“%s vem depois de %s no dicionário”, a, b);
5- Escreva uma função chamada troca que troca os valores dos
parâmetros recebidos. Sua assinatura deve ser:void troca(float *a, float *b);
void troca (int *i, int *j) {
int temp;
*temp = *i;
*i = *j;
*j = *temp;}
 
