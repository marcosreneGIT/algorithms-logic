// Entrada de dados

#include <stdio.h>

int main(void)
{
    char nome[50];
    int idade;
    float salario01, salario02;

    printf("Digite seu nome: ");
    scanf("%49s", nome);
    printf("\n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n");

    printf("Digite seus dois ultimos salarios: \n");
    scanf("%f", &salario01);
    scanf("%f", &salario02);
    printf("\n");

    printf("DADOS PESSOAIS:\n\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salario 1: %.2f\n", salario01);
    printf("Salario 2: %.2f\n", salario02);

    return 0;
}