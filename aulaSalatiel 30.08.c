#include<stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int continuar=1;

    do
    {
        printf("\n\tMenu de Cursos\n\n");
        printf("Informe uma opção válida e aperte a tecla enter\n\n");
        printf("1. Gestão de TI\n");
        printf("2. Análise d Desenvolvimento de Sistemas\n");
        printf("3. Segurança da Informação\n");
        printf("4. Consultar Nota\n");
        printf("5. Número 1 2 3\n");
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
                numero123();
                break;

            case 0:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
void gestaoTI()
{
    printf("Gestão de TI é a atividade que coordena todos os processos relacionados à tecnologia da informação dentro de uma empresa. Logo, o gestor de TI é o profissional responsável por garantir a máxima eficiência no uso dos recursos humanos e tecnológicos, otimizando a performance da organização.\n");
}

void analiseDesenvolvimentoSistemas()
{
    system("cls || clear");
    printf("O analista e desenvolvedor de sistemas é o profissional responsável por desenvolver, projetar, analisar, implementar e realizar a manutenção de sistemas de informação de diversos setores.\n");
}

void segurancaInformacao()
{
    system("cls || clear");
    printf("Segurança da informação é a prática que mantém os dados sensíveis em sigilo, a defesa do que não é público\n");
}

void consultarNota()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
  	float mediaAnual;
  	float mediaFinal;

    printf("Digite a nota 1:");
    scanf ("%f", &nota1);
    printf("Digite a nota 2:");
    scanf ("%f", &nota2);
    printf("Digite a nota 3 : ");
	scanf("%f", &nota3);
	printf("Digite a nota 4 : ");
	scanf("%f", &nota4);

    mediaAnual = (nota1 + nota2 + nota3 + nota4) / 4 ;

    if (mediaAnual >=7)
    {
        printf ("APROVADO");
    }
    else
    {
        printf ("REPROVADO");
    }
    void numero123 ()
    {
     int num1, num2, num3, temp;

     cout << "Numero 1: ";
     cin >> num1;

     cout << "Numero 2: ";
     cin >> num2;
    }
    void sair()
    {
        printf("Obrigado por visitar nossa lista de cursos\n");
    }
