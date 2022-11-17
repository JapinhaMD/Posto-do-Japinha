#include <string.h>
#include <stdio.h>
#include "header.h"


// Criação Struct 
struct Tcarro
{
    char modelo[30];
    char cor[30];
    int ano;
};

void introducao()
{
    printf(CYN "\n\n\n Autor: Joao Victor Rosada Yamaoka\n\n" RESET);

    printf("-----------------------------------\n");
    printf(GRN "   Bem-Vindo ao Posto Do Japinha\n" RESET);
    printf("-----------------------------------\n\n\n");

}
void flush_in()
{

    int ch;

    do
    {

        ch = fgetc(stdin);

    } while (ch != EOF && ch != '\n');
}

void despedida()
{

    printf(GRN "\nVolte Sempre ao posto do Japinha!!\n" RESET);
}

void erro()
{

    printf(RED "\nEscolha invalida!\n" RESET);
}

void menu1()
{
    printf(YEL " \n \n             <MENU>        \n " RESET);
    printf("\n\n 1 - Adicionar um carro na fila \n\n");
    printf(" 2 - Abastecimento \n\n");
    printf(" 3 - Exibir carros na fila de espera \n\n");
    printf(" 4 - Relatorios \n\n");
    printf(" 5 - Encerrar \n\n");
}

void menu2()
{
    printf(YEL "            <RELATORIO>     \n " RESET);
    printf("\n 1 - Quantidade de litros vendida \n\n");
    printf(" 2 - Valor total arrecadado com as vendas \n\n");
    printf(" 3 - Quantidade de carros atendidos \n\n");
    printf(" 4 - Quantidade de combustivel restante no tanque \n\n");
    printf(" 5 - Gerar arquivo para impressao \n\n");
    printf(" 6 - Voltar ao menu anterior ");
}

// struct - nome da struct - nome que vamos utilizar "m"
void lercarro(struct Tcarro espera[], int *filacarros, int filatotal, float tanque)
{

    if (*filacarros < filatotal && tanque > 0)
    {
        flush_in();

        printf("\ninforme o modelo do carro: ");
        fgets(espera[*filacarros].modelo, 30, stdin);

        printf("\ninforme a cor carro: ");
        fgets(espera[*filacarros].cor, 30, stdin);

        printf("\ninforme o ano do carro: ");
        scanf("%d", &espera[*filacarros].ano);
        flush_in();

        printf(GRN "\nCarro adicionado na fila " RESET);
        *filacarros = *filacarros + 1;
       
    }
    else
    {
        printf(RED "\n Fila maxima atingida!! " RESET);
    }
}



void lerString(char s[], int t)
{
    fgets(s, t, stdin);
    s[strcspn(s, "\n")] = 0;
}

void remover(struct Tcarro espera[],int filacarros){

    for ( int i = 0; i < filacarros; i++)
    {
        espera[i] = espera[i+1];
    }
}
