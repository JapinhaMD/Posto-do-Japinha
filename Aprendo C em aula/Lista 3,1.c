/*
#include <stdio.h>

int main(){

int n1,n2,soma;

printf("Digite o valor de N1:");
scanf("%d",&n1);

printf("\nDigite o valor de N2:");
scanf("%d",&n2);


soma = (n1+n2)*(n1+n2);

printf("\nO quadrado da soma de N1 e N2 é: %d",soma);

    return 0;
}*/


/*
#include <stdio.h>

int main(){

int n1,n2,soma;

printf("Digite o valor de N1:");
scanf("%d",&n1);

printf("\nDigite o valor de N2:");
scanf("%d",&n2);

n1 = n1*n1;
n2 = n2*n2;

soma = n1+n2;

printf("\nO quadrado da soma de N1 e N2 é: %d",soma);
    return 0;
}*/

/*
#include <stdio.h>

int main(){

float n1,n2,n3,media;

printf("Digite a nota 1:");
scanf("%f",&n1);

printf("\nDigite a nota 2:");
scanf("%f",&n2);

printf("\nDigite a nota 3:");
scanf("%f",&n3);

media = (n1+n2+n3)/3;

if (media >= 6)
{
   printf("\nNota final %.2f! Aprovado",media);
}
else
{
    printf("\nNota final %.2f! Reprovado",media);
}
    return 0;
}*/

/*
#include <stdio.h>

int main(){

int idade;

    printf("Digite sua idade:");
    scanf("%d",&idade);

    while (idade<=0)
    {
    printf("\nValor inválido. Por favor digite um valor inteiro e maior que 0 (zero):");
    scanf("%d",&idade);
    }

    if (idade <12)
    {
        printf("\nPela classificação do enunciado, você é CRIANÇA.");
    }

    else if ((idade >= 12) && (idade<18))
    {
        printf("\nPela classificação do enunciado, você é ADOLESCENTE.");
    }

    else 
    {
        printf("\nPela classificação do enunciado, você é ADULTO.");
    }

    return 0;
}*/