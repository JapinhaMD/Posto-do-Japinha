#include <string.h>
#include <stdio.h>
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

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

    printf("Esse programa representa um posto de gasolina virtual, em que tera uma fila de carros, abastecimento, quantidade de carros na fila, quantidade do abastecimento em litros, valor total arrecadado com as vendas, quantidade de carros atendidos e quantidade de combustivel restante no tanque");
    printf("\n\n\n\n");
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
    printf(" 6 - Voltar ao menu anterior Cn");
}

// struct - nome da struct - nome que vamos utilizar "m"
void lercarro(struct Tcarro m[], int *cont, int *filacarros, int filatotal, float tanque)
{

    if (*filacarros < filatotal && tanque > 0)
    {
        flush_in();

        printf("\ninforme o modelo do carro: ");
        fgets(m[*cont].modelo, 30, stdin);

        printf("\ninforme a cor carro: ");
        fgets(m[*cont].cor, 30, stdin);

        printf("\ninforme o ano do carro: ");
        scanf("%d", &m[*cont].ano);
        flush_in();

        printf(GRN "\nCarro adicionado na fila " RESET);
        *filacarros = *filacarros + 1;
        *cont = *cont + 1;
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
