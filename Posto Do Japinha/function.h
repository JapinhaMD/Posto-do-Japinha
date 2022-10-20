
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

int addcarro(int filacarros, int filatotal, int tanque)
{

    if (filacarros < filatotal && tanque > 0)
    {
        printf(GRN "\nCarro adicionado na fila " RESET);
        filacarros = filacarros + 1;
    }
    else
    {
        printf(RED "\n Impossivel adicionar um carro na fila!! " RESET);
    }
    return (filacarros);
}

void introducao()
{
    printf(CYN "\n\n\n Autor: Joao Victor Rosada Yamaoka\n\n" RESET);

    printf("-----------------------------------\n");
    printf(GRN "   Bem-Vindo ao Posto Do Japinha\n" RESET);
    printf("-----------------------------------\n\n\n");

    printf("Esse programa representa um posto de gasolina virtual, em que tera uma fila de carros, abastecimento, quantidade de carros na fila, quantidade do abastecimento em litros, valor total arrecadado com as vendas, quantidade de carros atendidos e quantidade de combustivel restante no tanque");
    printf("\n\n\n\n");
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
    printf(" 6 - Voltar ao menu anterior \n\n");
}
