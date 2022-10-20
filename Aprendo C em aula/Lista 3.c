/* Ex1)
#include <stdio.h>

int main (){

int numero;

printf("Digite um número:");
scanf("%d",&numero);
if (numero>0)
{
printf("\nNúmero positivo");
}
else if(numero<0)
{
    printf("\nNúmero negativo");
}
else
printf("\nVocê digitou 0!");


return 0;
}*/


/* Ex2)
#include <stdio.h>

int main (){

int numero;

    printf("Digite um número:");
    scanf("%d",&numero);

    if (numero % 2 == 0)
    {
    printf("\nNúmero par");
    }
    else
    printf("\nNúmero ímpar");
    

    return 0;
}*/


/*
#include <stdio.h>

int main(){

int n1,n2,n3;

printf("Digite o primeiro número:");
scanf("%d",&n1);
printf("\nDigite o segundo número:");
scanf("%d",&n2);
printf("\nDigite o terceiro número:");
scanf("%d",&n3);

if ((n1>n2)&&(n1>n3))
{
printf("\nO maior número é: %d",n1);
}
else if ((n2>1)&&(n2>n3))
{
printf("\nO maior número é: %d",n2);
}
else
printf("\nO maior número é: %d",n3);

    return 0;
}*/


/*
#include <stdio.h>

int main(){

float n1,n2,resultado;
char operacao;

printf("Informe uma operação (+, -, * ou /):");
scanf("%c",&operacao);

printf("\nDigite o primeiro número:");
scanf("%f",&n1);

printf("\nDigite o segundo número:");
scanf("%f",&n2);

switch (operacao)
{
case '+':
resultado = n1+n2;
printf("\nO resultado da operação é: %.1f",resultado);
    break;

case '-':
resultado = n1-n2;
printf("\nO resultado da operação é: %.1f",resultado);
    break;

case '*':
resultado = n1*n2;
printf("\nO resultado da operação é: %.1f",resultado);
    break;

case '/':
resultado = n1/n2;
printf("\nO resultado da operação é: %.1f",resultado);
    break;

default:
    printf("\nOpção incorreta");
    break;
}



    return 0;
}*/


/*
#include <stdio.h>

int main(){

int horas;
float maximo,total,excedente;


printf("Informe a quantidade de horas trabalhadas:");
scanf("%d",&horas);

total = horas*10;
maximo = 500;

if (horas > 50)
{
excedente = (horas - 50)*20;
total = maximo + excedente;
}

printf("\nSalário total: R$%.1f",total);
printf("\nDeste valor, você obteve R$ %.1f de horas excedentes.",excedente);




    return 0;
}


}*/








    