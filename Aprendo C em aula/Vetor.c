#include <stdio.h>

int main(){

int dmes[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
int dia,mes,soma;

soma = 0;

printf("Informe o dia atual: ");
scanf("%d",&dia);

printf("Informe o mes atual: ");
scanf("%d", &mes);

for (int i = 0; i + 1< mes; i++)
{
soma = soma + dmes[i];
}
soma = soma + dia;

printf("Ja se passaram %d  dias do ano", soma);

printf("\nFaltam %d dias para acabar o ano",(365 - soma));



    return 0;
}