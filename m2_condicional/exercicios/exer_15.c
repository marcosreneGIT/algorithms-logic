// troco verificado

#include <stdio.h>

int main(void){
    float precoProduto, valorPagamento, valorTotal, troco;
    int quantidadeProduto;

    printf("Informe o preco unitario do produto: ");
    scanf("%f", &precoProduto);

    printf("Informe a quantidade: ");
    scanf("%d", &quantidadeProduto);

    printf("Informe o valor recebido: ");
    scanf("%f", &valorPagamento);

    valorTotal = precoProduto * quantidadeProduto;

    if (valorPagamento >= valorTotal){
        troco = valorPagamento - valorTotal;
        printf("Troco: %.2f", troco);

        return 0;
        
    }
    printf("Valor insuficiente!");

    return 0;

}