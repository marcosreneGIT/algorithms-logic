// cada linha

#include <stdio.h>

int main(void){
    int tamanhoMatriz, maiorLinha;

    printf("Informe o tamanho da matriz: ");
    scanf("%d", &tamanhoMatriz);

    int matriz[tamanhoMatriz][tamanhoMatriz];

    for (int i = 0; i < tamanhoMatriz; i++){
        for (int j = 0; j < tamanhoMatriz; j++){
            printf("Elemento[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    printf("\nMaior elemento de cada linha: \n");
    for (int i = 0; i < tamanhoMatriz; i++){
        maiorLinha = matriz[i][0];
        for (int j = 0; j < tamanhoMatriz; j++){
            if(matriz[i][j] > maiorLinha){
                maiorLinha = matriz[i][j];
            }
        }
        printf("%d\n", maiorLinha);
    }
    return 0;
}