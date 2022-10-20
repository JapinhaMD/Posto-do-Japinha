// Calcular a 4 notas de 10 alunos

#include <stdio.h>

int main(){

float notas [4][10], media [10],soma[10] = {0,0,0,0,0,0,0,0,0,0};
int i,j,menor = 100,maior = 0,menoraluno,maioraluno;

for ( i = 0; i < 4; i++){

    printf("\nEfutuando a leitura da disciplina %d : ",i+1);

    for ( j = 0; j < 10; j++){
    
        printf("\nDigite a nota do aluno %d : ",j+1);
        scanf("%f", &notas[i][j]);
        if (notas[i][j] > maior)
        {
           maior = notas[i][j];
           maioraluno = j+1;
        }
        if (notas[i][j] < menor)
        {
            menor = notas[i][j];
            menoraluno = j+1;
        }
        soma[j+1] = notas[i][j] + soma[j+1];    
    }
}

   for ( j = 0; j < 10; j++)
   {
    media[j+1] = soma [j+1] / 4;
    if (media[j+1] >= 6){
        printf("\nAluno %d aprovado com media : %.2f\n", j+1 ,media[j+1]);
        }

    else{
        printf("\nAluno %d reprovado com media : %.2f\n",j+1,media[j+1]);
        } 
   }

   
    printf("\nA menor nota foi do aluno %d = %d \n",menoraluno,menor);


    printf("\nA maior nota foi do aluno %d = %d \n",maioraluno,maior);
   
    return 0;
}