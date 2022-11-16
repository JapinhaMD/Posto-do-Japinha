#include <stdio.h>
#include "function.h"
#include "header.h"
#include <string.h>
#include <stdlib.h>

int main()
{
    // sempre lembrar do Return 0;++++++++++++++

    float precocombustivel, precoabastecimento;
    float filatotal;


    // PrintF("Digite um numero");  SEMPRE COLOCAR PONTO E VIRGULA
    // ScanF("%d,&numero")
    // entrega 1

    introducao();

    printf("Informe o valor do combustivel (R$): ");

    while (!scanf("%f", &precocombustivel) || (precocombustivel <= 0))
    {
        printf(RED "Valor invalido para o preco do combustivel!!: " RESET);
        printf("\nInforme o valor do combustivel: ");
        flush_in();
    }

    printf("\nInforme o tamanho maximo da fila de carros: ");
    scanf("%f", &filatotal);
    // Fazer a validação de entrada de numeros nao inteiros
    // Utilizei o aux para ajudar na validação

    int aux;

    aux = filatotal;

    while ((aux != filatotal) || (filatotal <= 0))
    {

        printf(RED "Valor invalido para a fila!" RESET);
        printf("\nInforme o tamanho maximo da fila de carros: ");
        scanf("%f", &filatotal);
        aux = filatotal;
        flush_in();
    }
    system("cls");

   
    // Entrega 2 e 3

    int menu, opcao, filacarros;
    filacarros = 0;

    // Entrega 4  Linha 95

    int qtdatendidos;
    qtdatendidos = 0;

    float tanque, litros, litrosvendidos, reaisvendidos;
    tanque = 200;
    litrosvendidos = 0;
    reaisvendidos = 0;

    // Vetor do struct Tcarro

    struct Tcarro *espera;
    struct Tcarro *atendidos;


     // alocação dinamica
    espera =  (struct Tcarro *) malloc (filatotal * sizeof (struct Tcarro));
    atendidos = (struct Tcarro *) malloc (1 * sizeof(struct Tcarro));  
    

    // entrega 6

    int cont = 0, t = 0, i = 0, j = 0;

    while (opcao != 5)
    {
        menu1();
        scanf("%d", &opcao);
        system("cls");

        switch (opcao)
        {

        case 1:
            lercarro(espera, &filacarros, filatotal, tanque);

            break;

        case 2:
        system("cls");
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
                    atendidos = (struct Tcarro *) realloc (atendidos, (qtdatendidos + 1) * sizeof(struct Tcarro));     
                    tanque = tanque - litros;
                    printf(GRN "\n%.2f litros de abastecimento" RESET, litros);
                    printf(BLU "\n%.2f litros restantes no Tanque! " RESET, tanque);
                    filacarros = filacarros - 1;                  
                    atendidos[qtdatendidos] = espera[0];
                    litrosvendidos = litrosvendidos + litros;
                    reaisvendidos = reaisvendidos + precoabastecimento;
                    qtdatendidos = qtdatendidos + 1;             
                    remover(espera, filacarros);
                }

                else

                    printf(RED "\nSem combustivel suficiente no tanque para o abastecimento" RESET);
                litros = 0;
            }
            else
                printf(RED "\nImpossivel abastecer sem nenhum carro na fila!" RESET);
            break;

        case 3:
        system("cls");
            if (filacarros > 0)
            {
                for ( i = 0; i < filacarros; i++)
                {                  
                    printf(BLU "--------------------------------" RESET);
                    printf("\nModelo: %s",espera[i].modelo);
                    printf("Cor: %s",espera[i].cor);
                    printf("Ano: %d\n\n",espera[i].ano);
                }
                
               
                
            }
            printf(CYN "\n %d Carro(s) na fila de espera" RESET, filacarros);
            break;

        case 4:
            menu = 0;

            while (menu != 6)
            {
                menu2();

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
                    printf(GRN "\n\n%d carro(s) atendido(s) \n\n" RESET, qtdatendidos);
                    system("cls");
                   for ( i = 0; i < qtdatendidos; i++)
                   {
                    printf(BLU"-----------------------------"RESET);
                    printf("\nModelo: %s",atendidos[i].modelo);
                    printf("Cor: %s",atendidos[i].cor);
                    printf("Ano: %d\n",atendidos[i].ano);
                   }
                   

                    break;
                case 4:
                    printf(GRN "\n\n%.2f litros restantes no tanque\n\n" RESET, tanque);
                    break;
                case 5:
                    printf(GRN "\n%.2f litros vendidos\n" RESET, litrosvendidos);
                    printf(GRN "\n%.2f reais arrecadados com as vendas\n" RESET, reaisvendidos);
                    printf(GRN "\n%d carros atendidos\n" RESET, qtdatendidos);
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