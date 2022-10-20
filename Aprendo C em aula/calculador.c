#include <stdio.h>
#include "calculador.h"

int main()
{
    float n1, n2;
    char opcao;

    printf("Escolha a opcao desejada para calcular (+,-,*,/)");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case '+':

        printf("Informe o primeiro numero: ");
        scanf("%f", &n1);

        printf("Informe o segundo numero: ");
        scanf("%f", &n2);

        printf("%.2f", soma(n1, n2));
        break;

    case '-':

        printf("Informe o primeiro numero: ");
        scanf("%f", &n1);

        printf("Informe o segundo numero: ");
        scanf("%f", &n2);

        printf("%.2f", subtracao(n1, n2));
        break;

    case '*':

        printf("Informe o primeiro numero: ");
        scanf("%f", &n1);

        printf("Informe o segundo numero: ");
        scanf("%f", &n2);

        printf("%.2f", multiplicacao(n1, n2));

        break;

    case '/':

        printf("Informe o primeiro numero: ");
        scanf("%f", &n1);

        printf("Informe o segundo numero: ");
        scanf("%f", &n2);

        printf("%.2f", divisao(n1, n2));

        break;

    default:

        printf("Escolha invalida");
        break;
    }

    return 0;
}