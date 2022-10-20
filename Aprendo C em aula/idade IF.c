#include <stdio.h>

int main(){

int idade;

printf("Informe a sua idade: ");
scanf("%d",&idade);

if ((idade>0)&&(idade<12))
{
    printf("Voce e um bbzinho");
}
else if ((idade>=12)&&(idade<18))
{
printf("Voce e um jovem aprendiz da vida ");
}

else if (idade>18)
{
    printf("Voce e um adulto com %d",idade);
}

    return 0;
}