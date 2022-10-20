#include <stdio.h>
#include "function.h"


int main()
{
    // sempre lembrar do Return 0;

    float precocombustivel, precoabastecimento;
    int filatotal;

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

    // PrintF("Digite um numero");  SEMPRE COLOCAR PONTO E VIRGULA
    // ScanF("%d,&numero")
    // entrega 1

    printf(CYN "\n\n\n Autor: Joao Victor Rosada Yamaoka\n\n" RESET);

    printf("-----------------------------------\n");
    printf(GRN "   Bem-Vindo ao Posto Do Japinha\n" RESET);
    printf("-----------------------------------\n\n\n");

    printf("Esse programa representa um posto de gasolina virtual, em que tera uma fila de carros, abastecimento, quantidade de carros na fila, quantidade do abastecimento em litros, valor total arrecadado com as vendas, quantidade de carros atendidos e quantidade de combustivel restante no tanque");
    printf("\n\n\n\n");

    printf("Informe o valor do combustivel (R$): ");

    while (!scanf("%f", &precocombustivel) || (precocombustivel <= 0))
    {
        printf(RED "Valor invalido para o preco do combustivel!!: " RESET);
        printf("\nInforme o valor do combustivel: ");
        fflush(stdin);
    }
    system("cls");

    printf("\nInforme o tamanho maximo da fila de carros: ");


    // Fazer a validação de entrada de numeros nao inteiros
    
    while (!scanf("%d", &filatotal) || (filatotal <= 0))
    {
        printf(RED "Valor invalido para a fila!" RESET);
        printf("\nInforme o tamanho maximo da fila de carros: ");
        fflush(stdin);
    }
    system("cls");

    // Entrega 2 e 3

    int menu, opcao, filacarros;
    filacarros = 0;

    // Entrega 4  Linha 95

    int atendidos;
    atendidos = 0;

    float tanque, litros, litrosvendidos, reaisvendidos;
    tanque = 200;
    litrosvendidos = 0;
    reaisvendidos = 0;

    while (opcao != 5)
    {
        printf(YEL " \n \n             <MENU>        \n " RESET);
        printf("\n\n 1 - Adicionar um carro na fila \n\n");
        printf(" 2 - Abastecimento \n\n");
        printf(" 3 - Exibir carros na fila de espera \n\n");
        printf(" 4 - Relatorios \n\n");
        printf(" 5 - Encerrar \n\n");

        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {

        case 1:
            filacarros = addcarro(filacarros, filatotal,tanque);
            break;

        case 2:
            if (tanque <= 0)
            {
                printf(RED "\nSem combustivel no tanque" RESET);
                filacarros = 0;
            }
            else if (filacarros > 0)
            {

                printf("\nDigite o valor  que sera abastecido (R$)");
                scanf("%f", &precoabastecimento);

                while (precoabastecimento <= 0)
                {
                    printf(RED "\nValor invalido, digite novamente: " RESET);
                    scanf("%f", &precoabastecimento);
                }

                litros = precoabastecimento / precocombustivel;

                if (tanque >= litros)
                {
                    tanque = tanque - litros;
                    printf(GRN "\n%.2f litros de abastecimento" RESET, litros);
                    printf(BLU "\n%.2f litros restantes no Tanque! " RESET, tanque);
                    filacarros = filacarros - 1;
                    atendidos = atendidos + 1;
                    litrosvendidos = litrosvendidos + litros;
                    reaisvendidos = reaisvendidos + precoabastecimento;
                }

                else

                    printf(RED "\nSem combustivel suficiente no tanque para o abastecimento" RESET);
                litros = 0;
            }
            else
                printf(RED "\nImpossivel abastecer sem nenhum carro na fila!" RESET);
            break;

        case 3:
            printf(CYN "\n %d Carro(s) na fila de espera" RESET, filacarros);
            break;

        case 4:
            menu = 0;

            while (menu != 6)
            {
                printf(YEL "            <RELATORIO>     \n " RESET);
                printf("\n 1 - Quantidade de litros vendida \n\n");
                printf(" 2 - Valor total arrecadado com as vendas \n\n");
                printf(" 3 - Quantidade de carros atendidos \n\n");
                printf(" 4 - Quantidade de combustivel restante no tanque \n\n");
                printf(" 5 - Gerar arquivo para impressao \n\n");
                printf(" 6 - Voltar ao menu anterior \n\n");

                scanf("%d", &menu);
                system("cls");

                switch (menu)
                {
                case 1:
                    printf(GRN "\n\n %.2f litros vendidos \n\n" RESET, litrosvendidos);
                    break;
                case 2:
                    printf(GRN " \n\n %.2f reais arrecadados \n\n" RESET, reaisvendidos);
                    break;
                case 3:
                    printf(GRN "\n\n%d carro(s) atendido(s) \n\n" RESET, atendidos);
                    break;
                case 4:
                    printf(GRN "\n\n%.2f litros restantes no tanque\n\n" RESET, tanque);
                    break;
                case 5:
                    printf(GRN "\n%.2f litros vendidos\n" RESET, litrosvendidos);
                    printf(GRN "\n%.2f reais arrecadados com as vendas\n" RESET, reaisvendidos);
                    printf(GRN "\n%d carros atendidos\n" RESET, atendidos);
                    printf(GRN "\n%.2f litros restante no tanque" RESET, tanque);
                    break;
                case 6:
                    break;
                default:
                    printf(RED "\n\nEscolha invalida\n" RESET);
                    break;
                }
            }
            break;

        case 5:
         despedida();
            break;
        default:
            erro();
            break;
        }
    }
    return 0;
}