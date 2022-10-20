#include <stdio.h>

int main(){

int numero;

printf("Escolha um numero entre 1 a 3: ");
scanf("%d",&numero);

switch (numero)
{
case 1 :
   printf("Voce escolheu o numero 1");
    break;
    
    case 2:
    printf("Voce ecsolheu o numero 2");

break;

case 3:
printf("Voce escolheu o numero 3");


default:
printf("Escolha invalida");
    break;
}




return 0;
}