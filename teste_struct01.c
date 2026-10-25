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

    printf("------------------------\n");

    pessoa albu;

    printf("Digite seu nome: \n");
    scanf(" %39[^\n]", &albu.nome);

    printf("Digite seu aniversario: \n");
    scanf(" %d",&albu.aniversario.dia);
    scanf(" %d",&albu.aniversario.mes);
    scanf(" %d",&albu.aniversario.ano);

    printf("Digite sua Idade: \n");
    scanf(" %d", &albu.idade);

    printf("Digite sua Altura: \n");
    scanf(" %f", &albu.altura);

    printf("------------------------\n");

    printf("Nome: %s\n", albu.nome);

    printf("Aniversario: %02d / %02d/ %04d\n",
    albu.aniversario.dia,
    albu.aniversario.mes,
    albu.aniversario.ano);

    printf("Idade: %d anos\n",albu.idade);

    printf("Altura: %.2f m\n", albu.altura);

    return 0;
}
