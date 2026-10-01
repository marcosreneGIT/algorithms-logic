//matriz geral

#include <stdio.h>

int main(void){
    int tamanhoMatriz, linha, coluna;

    printf("Informe o tamanho da matriz: ");
    scanf("%d", &tamanhoMatriz);

    float 
    matriz[tamanhoMatriz][tamanhoMatriz],
    matrizAlterada[tamanhoMatriz][tamanhoMatriz],
    somaMatrizPositivo = 0;

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            if(matriz[i][j] > 0){
                somaMatrizPositivo += matriz[i][j];
            }
        }
    }

    printf("\nSoma dos positivos: %.1f\n", somaMatrizPositivo);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);

    for (int i = 0; i < tamanhoMatriz; i++){
        printf("%.1f ", matriz[linha][i]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    for (int i = 0; i < tamanhoMatriz; i++){
        printf("%.1f ", matriz[i][coluna]);
    }

    printf("\n\nDiagonal principal: \n");
    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            if(j == i){
                printf("%.1f ", matriz[i][j]);
            }
        }
    }

    printf("\n\nMatriz alterada: \n");
    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            if(matriz[i][j] < 0){
                matrizAlterada[i][j] = matriz[i][j] * matriz[i][j];
            }
            else{
                matrizAlterada[i][j] = matriz[i][j];
            }
        }
        }

    for (int i = 0; i < tamanhoMatriz; i++){
        printf("\n");
        for (int j = 0; j < tamanhoMatriz; j++){
        printf("%.1f ", matrizAlterada[i][j]);
            }
        }

        return 0;
    }
       
