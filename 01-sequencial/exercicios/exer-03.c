// Idades

#include <stdio.h>

int main(void)
{
    char nome01[50], nome02[50];
    int idade01, idade02;
    float mediaIdade;

    printf("\nDados da primeira pessoa: ");
    printf("\nNome: ");
    scanf("%s", nome01);
    printf("Idade: ");
    scanf("%d", &idade01);

    printf("\nDados da segunda pessoa: ");
    printf("\nNome: ");
    scanf("%s", nome02);
    printf("Idade: ");
    scanf("%d", &idade02);

    mediaIdade = (idade01 + idade02) / 2.0;
    printf("\nIdade media entre %s e %s: %.1f", nome01, nome02, mediaIdade);

    return (0);
}