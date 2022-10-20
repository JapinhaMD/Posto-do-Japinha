/* numeros divisiveis por 4

#include <stdio.h>

int main(){
    int i;

for ( i = 0; i < 20; i++)
{
   if (i % 4 == 0)
   {
  printf("%d\n",i);
   }
   
}

    return 0;
}*/



/* tabuada dos numeros

#include <stdio.h>

int main(){

int numero,tabuada,i;

    printf("informe um número para tabuada:\n");
    scanf("%d",&numero);
if ((numero < 1)||(numero > 10))
{
    printf("Número inválido");
}
else  
{
    tabuada = 0;

for ( i = 1; i <= 10; i++)
    {
    tabuada = numero * i;
    printf("%d x ",numero);
    printf("%d = ",i);
    printf("%d\n",tabuada);
    tabuada = 0;    
    }
}

    return 0;
}*/



/* numeros pares maiores que 1000 e menores que 1500

#include <stdio.h>

int main(){

int i;

for ( i = 1001; i < 1499; i++)
{
if (i % 2 == 0)
{
printf("%d\n",i);
}

}

    return 0;
}*/



/* numeros divisiveis por 2, 4 e 5

#include <stdio.h>

int main(){

int i;

for ( i = 0; i <= 100; i++)
{
    if ((i % 2 == 0)&&(i % 4 == 0)&&(i % 5 == 0))
    {
        printf("%d\n",i);
    }
    
}

    return 0;
}*/



/* potencia de base 2 com expoente de 1 a 10
 
#include <stdio.h>

int main(){

int i,quadrado = 1;

for ( i = 1; i <= 10; i++)
{
    quadrado = quadrado * 2;
    printf("2 ^ %d = ",i);
    printf("%d\n",quadrado);
}

    return 0;
}*/