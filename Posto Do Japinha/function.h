
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"


int addcarro (int filacarros, int filatotal, int tanque){

    if (filacarros < filatotal && tanque > 0)
            {
                printf(GRN "\nCarro adicionado na fila " RESET);
                filacarros = filacarros + 1;
            }
            else
            {
                printf(RED "\n Impossivel adicionar um carro na fila!! " RESET);
            }
            return(filacarros);
            

}

void despedida (){

printf(GRN "\nVolte Sempre ao posto do Japinha!!\n" RESET);
}

void erro(){

    printf(RED"\nEscolha invalida!\n"RESET);
}

