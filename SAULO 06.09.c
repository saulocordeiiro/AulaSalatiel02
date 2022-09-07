#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma op��o v�lida e aperte a tecla enter\n\n");
        printf("1. Gest�o de TI\n");
        printf("2. An�lise d Desenvolvimento de Sistemas\n");
        printf("3. Seguran�a da Informa��o\n");
        printf("4. Consultar Nota\n");
        printf("5. Calculadora\n");
        printf("0. Sair\n");

        scanf("%d", &continuar);
            system("cls || clear");

        switch(continuar)
        {
            case 1:
                gestaoTI();
                break;

            case 2:
                analiseDesenvolvimentoSistemas();
                break;

            case 3:
                segurancaInformacao();
                break;

            case 4:
                consultarNota();
                break;
            case 5:
                Calculadora();
                break;
            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
void gestaoTI()
{
    printf("Gest�o de TI � a atividade que coordena todos os processos relacionados � tecnologia da informa��o dentro de uma empresa. Logo, o gestor de TI � o profissional respons�vel por garantir a m�xima efici�ncia no uso dos recursos humanos e tecnol�gicos, otimizando a performance da organiza��o.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas � o profissional respons�vel por desenvolver, projetar, analisar, implementar e realizar a manuten��o de sistemas de informa��o de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Seguran�a da informa��o � a pr�tica que mant�m os dados sens�veis em sigilo, a defesa do que n�o � p�blico\n");
}
void consultarNota ()
{
    float np1;
    float np2;
    float pim;
    float presenca;
    float faltas;
    float NotaFinal;

    printf("Digite a np1:");
    scanf ("%f", &np1);
    printf("Digite a np2:");
    scanf ("%f", &np2);
    printf("Digite a nota pim : ");
    scanf("%f", &pim);
    printf("Digite a presenca : ");
    scanf("%f", &presenca);

    np1 = (np1 * 40);
    np2 = (np2 * 40);
    pim = (pim * 20);
    NotaFinal = ( np1 + np2 + pim) /100;
    faltas = (presenca * 75) / 100;

    if (NotaFinal >=5 && faltas >= 37,5)
    {
        printf ("APROVADO");
    }
    else
    {
        printf ("REPROVADO");
    }
}
    void Calculadora ()
{
    int num1, num2, soma, subtracao, multi, div;
    printf("Digite o num1: ");
    scanf("%i", &num1);
    printf("Digite o num2: ");
    scanf("%i", &num2);

    soma            = num1 + num2;
    subtracao       = num1 - num2;
    multi           = num1 * num2;
    div             = num1 / num2;

    printf( "A soma �: %i\n", soma );
    printf( "A subtracao �: %i\n", subtracao );
    printf( "O produto �: %i \n", multi );
    printf( "A divis�o �: %i \n", div );
}
    void sair()
    {
        printf("Obrigado por visitar nossa lista de cursos\n");
    }
