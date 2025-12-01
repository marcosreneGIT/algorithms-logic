// Troco

#include <stdio.h>

int main(void)
{
    float valorProduto, valorPagamento, troco;
    int quantidadeProduto;

    printf("\nInforme o preco do produto: ");
    scanf("%f", &valorProduto);
    printf("Informe a quantidade comprada: ");
    scanf("%d", &quantidadeProduto);

    printf("\nInforme o valor recebido: ");
    scanf("%f", &valorPagamento);

    troco = valorPagamento - valorProduto * quantidadeProduto;

    printf("\nTotal de troco: %.2f", troco);

    return (0);
}