#include <stdio.h>

int main(){

    float num;

        printf("Digite um numero: ");
        scanf("%d",&num);
    if ((num>0) && (num < 10))
    { 
        printf("Numero digitado entre 0 e 10");
    }   //endif
    else{
        printf("Numero digitado maior que 10 ou menor que 0");
    }
    







    return 0;
} 