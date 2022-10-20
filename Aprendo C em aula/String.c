#include <stdio.h>
#include <string.h>

int main()
{

#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define RESET "\x1B[0m"

    /*
    char nome1[30], nome2[30];

    printf("Digite o primeiro nome: ");
    // scanf("%s", &nome);
    fgets(nome1, 30, stdin);


     printf("Digite o segundo nome: ");
    // scanf("%s", &nome);
    // O problema de usar é que sempre pula uma linha!
    fgets(nome2, 30, stdin);


    printf("Nome 1 = %sNome 2 = %s",nome1,nome2);
    */





    // Escreva Um programa em C que solicite a senha do usuário, se a senha for igual a senha
    // previamente definida, ele terá acesso autorizado

    char novasenha[20], senha[20];

    printf("Digite uma nova senha: ");
    fflush(stdin);
    gets(novasenha);
    // utilizar fflush para limpar buffer

    printf("Digite a senha do usuario: ");
    fflush(stdin);
    gets(senha);

    // utilizar "strcmp" para fazer comparaçao de string
    while (strcmp(novasenha, senha) != 0)
    {
        printf(RED"\nAcesso negado, digite a senha novamente: "RESET);
        fflush(stdin);
        gets(senha);
    }

    printf(GRN"\nAcesso Autorizado!!"RESET);

    return 0;
}