#include <stdio.h>

// void funciona como uma funçao pré definida no final do código para facilitar na codagem

void mensagem();

int soma();

int main()
{

   
    mensagem();

   printf("%d",soma());

    return 0;
}

// Quando utilizar o void "mensagem();" ele vai fazer o comando que está dentro do void
void mensagem()
{
    printf("Ola mundo");
}

int soma()
{
    int n1,n2;

    printf("\n\nDigite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    printf("A soma dos numeros =  ");

    return n1+n2;

}