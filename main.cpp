#include <stdio.h>
#include <stdlib.h>
int main()
{
    //declaração de variaveis
    float nota1;
    float nota2;
    float mediaanual;
    float mediaexame;

    //entrada
    printf("Digite a nota 1 :");
    scanf("%f", &nota1);
    printf("Digite a nota 2 :");
    scanf("%f", &nota2);

    //processamento
    mediaanual = (nota1 + nota2) / 2;
    mediaexame = (mediaexame + mediaanual) / 2;

    //criticar para saber se o aluno esta aprovado ou retido
    //saida
    if (mediaanual >=5) {
        printf( "APROVADO!!!");
    }
    else {
      printf("REPROVADO!!");
      printf("ALUNO DEVE CURSAR DP");
      printf("Digite a nota do exame :");
      scanf("%f", &mediaexame);

      if (mediaexame >=5 ) {
          printf("APROVADO!!");
    }
    else {
      printf("REPROVADO!!");

      }


    }
    return 0;
}
