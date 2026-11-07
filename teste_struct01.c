#include <stdio.h>
#include <string.h>

typedef struct {

    int dia;
    int mes;
    int ano;

} data;

typedef struct {

    char nome[40];
    data aniversario;
    int idade;
    float altura;

} pessoa;

void adicionar_pessoa(pessoa *x)
{
    printf("Digite seu nome: \n");
    scanf(" %39[^\n]", x -> nome);

    printf("Digite seu aniversario: \n");
    scanf(" %d",&x -> aniversario.dia);
    scanf(" %d",&x -> aniversario.mes);
    scanf(" %d",&x -> aniversario.ano);

    printf("Digite sua Idade: \n");
    scanf(" %d", &x -> idade);

    printf("Digite sua Altura: \n");
    scanf(" %f", &x -> altura);
}

void mostrar_pessoa(pessoa *x)
{
    printf("----------------------------\n");
    printf("------Mostrar o Resenha-----\n");
    printf("----------------------------\n\n");

    printf("O Nome eh: %s\n", x -> nome);
    printf("A Data de nascimento eh: %d / %d / %d\n", x -> aniversario.dia,x -> aniversario.mes,x -> aniversario.ano);
    printf("A Idade eh: %d\n", x -> idade);
    printf("A Altura eh: %.2f\n", x -> altura);

}
int main()
{
    int n = 0,i,opcao,cadastrados = 0;
    char nome_busca[40];

    printf("Digite quantas pessoas voce quer cadastrar: \n");
    scanf("%d", &n);

    while(n <= 0)
    {
        printf("Valor invalido, digite um valor valido\n");
        scanf("%d",&n);
    }

    pessoa pessoas[n];

    do
    {
        printf("\n----Menu----\n");
        printf("1.Cadastrar\n");
        printf("2.Mostrar as Pessoas\n");
        printf("3.Buscar pessoa pelo nome\n");
        printf("4.Mostrar o mais velho\n");
        printf("5.Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                if(cadastrados >= n)
                {
                    printf("Limite de Cadastros atingido\n");
                }
                else
                {
                    printf("Cadastrar\n");

                    for (i = cadastrados;i < n; i++)
                    {
                        adicionar_pessoa(&pessoas[i]);
                        cadastrados++;
                    }
                    printf("Cadastro concluido\n");
                    printf("-----------------------------\n");

                }
                    break;

            case 2:
                if(cadastrados == 0)
                {
                    printf("Nenhuma pessoa cadastrada\n");
                }
                else
                {
                    for(i = 0; i < cadastrados; i++)
                    {
                        mostrar_pessoa(&pessoas[i]);
                    }
                printf("-----------------------------\n");

                }
                break;

            case 3:
                if(cadastrados == 0)
                {
                    printf("Sem pessoas cadastradas\n");
                }
                else
                {
                    printf("Qual o nome da pessoa que voce esta buscando?");
                    scanf(" %39[^\n]", nome_busca);

                    int encontrado = 0;

                    for(i = 0; i < cadastrados; i++)
                    {
                        if(strcmp(pessoas[i].nome, nome_busca) == 0)
                        {
                            mostrar_pessoa(&pessoas[i]);
                            encontrado = 1;
                        }
                    }
                    if(encontrado == 0)
                    {
                        printf("Pessoa nao encontrada\n");
                    }
                }
                break;

            case 4:
                if(cadastrados == 0)
                {
                    printf("Sem pessoas cadastradas\n");
                }
                else
                {
                    int maior_idade = pessoas[0].idade, indice_mais_velho = 0;

                    for(i = 1;i < cadastrados;i++)
                    {
                        if(maior_idade < pessoas[i].idade)
                        {
                            maior_idade = pessoas[i].idade;
                            indice_mais_velho = i;
                        }
                    }
                    mostrar_pessoa(&pessoas[indice_mais_velho]);
                }
                break;

            case 5:
                return 0;

            default:
                printf("\nOpcao invalida\n");
                break;
        }

    } while(opcao != 5);

    return 0;
}
