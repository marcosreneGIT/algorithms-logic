// diagonal negativos

#include <stdio.h>

int main(void){
    int tamanhoMatriz, quantidadeNegativos = 0;

    printf("Informe o tamanho da matriz: ");
    scanf("%d", &tamanhoMatriz);

    int matriz[tamanhoMatriz][tamanhoMatriz];

    for(int i=0; i < tamanhoMatriz; i++){
        for(int j=0; j < tamanhoMatriz; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            
        }
    }

    printf("\nDiagonal principal: \n");
    for(int i=0; i < tamanhoMatriz; i++){
        for(int j=0; j < tamanhoMatriz; j++){
            if(i == j){
                printf("%d ", matriz[i][j]);
            }
            if(matriz[i][j] < 0){
                quantidadeNegativos++;
            }
        }
    }

    printf("\nQuantidade de negativos: %d", quantidadeNegativos);

    return 0;
}