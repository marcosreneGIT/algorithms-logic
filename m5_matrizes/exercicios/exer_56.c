//soma matriz

#include <stdio.h>

int main(void){
    int quantidadeLinhas, quantidadeColunas;

    printf("Informe a quantidade de linhas : ");
    scanf("%d", &quantidadeLinhas);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &quantidadeColunas);

    int 
    matrizA[quantidadeLinhas][quantidadeColunas],
    matrizB[quantidadeLinhas][quantidadeColunas],
    matrizC[quantidadeLinhas][quantidadeColunas];

    printf("\nInforme os valores da matriz A: \n");
    for (int i = 0; i < quantidadeLinhas; i++){
        for (int j = 0; j < quantidadeColunas; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("\nInforme os valores da matriz B: \n");
    for (int i = 0; i < quantidadeLinhas; i++){
        for (int j = 0; j < quantidadeColunas; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < quantidadeLinhas; i++){
        for (int j = 0; j < quantidadeColunas; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("\nMatriz soma: ");
    for (int i = 0; i < quantidadeLinhas; i++){
        printf("\n");
        for (int j = 0; j < quantidadeColunas; j++){
            printf("%d ", matrizC[i][j]);
        }
    }
    return 0;
}