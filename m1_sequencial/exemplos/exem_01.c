// Teste de saída

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Declaração
    int inteiro;
    float real;
    char *caractere;
    bool logico;

    // Atribuição
    inteiro = 32;
    real = 2.34567;
    caractere = "Bom dia!";
    logico = true;

    // Exibição
    printf("Numero inteiro: %d\n", inteiro);
    printf("Numero real: %.2f\n", real);
    printf("Texto: %s\n", caractere);
    printf("Valor booleano: %d\n", logico);

    return 0;
}
