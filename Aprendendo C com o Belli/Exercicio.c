#include <stdio.h>

//adicionar uma biblioteca
//usar main e {}

int main(){

// variavel -- tipo primitivo_nome da variavel
    int num1,num2, soma;

    printf("Informe um valor");
    scanf("%d", &num1);

    printf("Informe outro valor:");
    scanf("%d", &num2);

//& = Endereço de memória
    soma = num1+num2;

    printf("A Soma  igual a: %d",soma);



    return 0;
}