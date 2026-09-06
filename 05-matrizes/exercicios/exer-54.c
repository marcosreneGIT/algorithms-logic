// negativos matriz

#include <stdio.h>

int main(void){
    int quantidadeLinhas, quantidadeColunas;

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &quantidadeLinhas);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &quantidadeColunas);

    int matriz[quantidadeLinhas][quantidadeColunas];

    for (int i = 0; i < quantidadeLinhas; i++){
        for (int j = 0; j < quantidadeColunas; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }     
    }

    printf("\nValores negativos: \n");
    for (int i = 0; i < quantidadeLinhas; i++){
        for (int j = 0; j < quantidadeColunas; j++){
            if(matriz[i][j] < 0){
                printf("%d\n", matriz[i][j]);
            }
        }     
    }
    return 0;
}