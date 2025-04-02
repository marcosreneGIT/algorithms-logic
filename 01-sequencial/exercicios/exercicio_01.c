// Terreno

#include <stdio.h>

int main(void)
{

    float larg, comp, area, ValMetroQ, preco;

    printf("Digite a largura do terreno: ");
    scanf("%f", &larg);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comp);

    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &ValMetroQ);

    printf("\n");

    area = larg * comp;
    preco = area * ValMetroQ;

    printf("Area do terreno: %.2fm2\n", area);
    printf("Preco do terreno: R$%.2f", preco);

    return 0;
}