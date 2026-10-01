// Exercício de fixação

#include <stdio.h>

int main(void)
{

    const char *produto01 = "Computador";
    const char *produto02 = "TV";

    float preco01 = 2100.5;
    float preco02 = 1830.0;

    int codigo = 5291;
    int idade = 30;
    char genero = 'F';

    printf("O produto %s custa R$%.2f.\n", produto01, preco01);
    printf("O produto %s custa R$%.2f.\n", produto02, preco02);

    printf("\n");

    printf("Codigo = %d\n", codigo);

    printf("\n");

    printf("Dados pessoais: Genero = %c | Idade = %d", genero, idade);

    return 0;
}