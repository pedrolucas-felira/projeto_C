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

int main()
{
    pessoa pl;

    printf("Digite seu nome: \n");
    scanf(" %39[^\n]", &pl.nome);

    printf("Digite seu aniversario: \n");
    scanf(" %d",&pl.aniversario.dia);
    scanf(" %d",&pl.aniversario.mes);
    scanf(" %d",&pl.aniversario.ano);

    printf("Digite sua Idade: \n");
    scanf(" %d", &pl.idade);

    printf("Digite sua Altura: \n");
    scanf(" %f", &pl.altura);

    printf("------------------------\n");

    printf("Nome: %s\n", pl.nome);

    printf("Aniversario: %02d / %02d/ %04d\n",
    pl.aniversario.dia,
    pl.aniversario.mes,
    pl.aniversario.ano);

    printf("Idade: %d anos\n",pl.idade);

    printf("Altura: %.2f m\n", pl.altura);

    return 0;
}
