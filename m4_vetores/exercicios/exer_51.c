// comerciante

#include <stdio.h>

int main(void){
    int tamanhoVetor;

    printf("Informe a quantidade de produtos: ");
    scanf("%d", &tamanhoVetor);

    char nomeProduto[tamanhoVetor][50];

    float
    precoCompra[tamanhoVetor],
    precoVenda[tamanhoVetor],
    lucro,
    lucroTotal = 0,
    lucroPorcentagem,
    valorTotalCompra = 0,
    valorTotalVenda = 0;

    for(int i = 0; i < tamanhoVetor; i++){
        printf("\nNome: ");
        scanf("%s", nomeProduto[i]);
        printf("Preco de compra: ");
        scanf("%f", &precoCompra[i]);
        printf("Preco de venda:  ");
        scanf("%f", &precoVenda[i]);

    }

    printf("RELATORIO: \n\n");

    for(int i = 0; i < tamanhoVetor; i++){
        valorTotalCompra += precoCompra[i];
        valorTotalVenda += precoVenda[i];

        lucro = precoVenda[i] - precoCompra[i];
        lucroPorcentagem = (lucro / precoCompra[i]) * 100;

        if(lucroPorcentagem < 10){
            printf("%s: ABAIXO DE 10%%\n", nomeProduto[i]);
        }
        else if(lucroPorcentagem >= 10 && lucroPorcentagem <= 20){
            printf("%s: ENTRE 10%% A 20%%\n", nomeProduto[i]);
        }
        else{
            printf("%s: ACIMA DE 20%%\n", nomeProduto[i]);
        }

    }
    lucroTotal = valorTotalVenda - valorTotalCompra;

    printf(
        "\nVALOR TOTAL DE COMPRA: %.2f"
        "\nVALOR TOTAL DE VENDA : %.2f"
        "\nLUCRO TOTAL          : %.2f",
        valorTotalCompra,
        valorTotalVenda,
        lucroTotal
    );
}