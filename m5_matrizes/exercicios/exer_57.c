//acima diagonal

#include <stdio.h>

int main(void){
    int tamanhoMatriz, somaAcimaDiagonal = 0;

    printf("Informe o tamanho da matriz: ");
    scanf("%d", &tamanhoMatriz);

    int matriz[tamanhoMatriz][tamanhoMatriz];

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            if(j > i){
                somaAcimaDiagonal += matriz[i][j];
            }
        }
    }
    printf("\nSoma acima da diagonal: %d", somaAcimaDiagonal);

    return 0;
}