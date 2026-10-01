// lanchonete 

#include <stdfix.h>

int main(void){
    int codigoProduto, quantidadeProduto;
    float valorProduto;

    printf("Informe o codigo do produto: ");
    scanf("%d", &codigoProduto);

    switch (codigoProduto)
    {   
    case 1:
        valorProduto = 5;
        break;
    case 2: 
        valorProduto = 3.50;
        break;
    case 3: 
        valorProduto = 4.80;
        break;
    case 4: 
        valorProduto = 8.90;
        break;
    case 5:
        valorProduto = 7.32;
        break;

    default:
        printf("Codigo do produto nao encontrado! Tentar novamente.");
        return 0;

    }
    
    printf("Informe a quantidade comprada: ");
    scanf("%d", &quantidadeProduto);

    printf("Valor a pagar: R$%.2f", valorProduto * quantidadeProduto);
    return 0;
}