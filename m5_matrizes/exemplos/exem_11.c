// matriz

#include <stdio.h>

int main(void){
    int tamanhoLinha, tamanhoColuna;

    printf("Informe quantas linhas tera sua matriz : ");
    scanf("%d", &tamanhoLinha);
    printf("Informe quantas colunas tera sua matriz: ");
    scanf("%d", &tamanhoColuna);

    int matriz[tamanhoLinha][tamanhoColuna];

    for(int i = 0; i < tamanhoLinha; i++){
        for(int j = 0; j < tamanhoColuna; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("MATRIZ: ");
    for(int i = 0; i < tamanhoLinha; i++){
        printf("\n");
        for(int j = 0; j < tamanhoColuna; j++){
            printf("%d ", matriz[i][j]);
        }
    }
}