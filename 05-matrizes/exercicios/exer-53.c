// soma linhas

#include <stdio.h>

int main(void){
    int tamanhoLinhas, tamanhoColunas;

    printf("Informe a quantidade de linhas : ");
    scanf("%d", &tamanhoLinhas);
    printf("Informe a quantidade de colunas: ");
    scanf("%d", &tamanhoColunas);

    float matriz[tamanhoLinhas][tamanhoColunas], somaLinha;

    for(int i = 0; i < tamanhoLinhas; i++){
        printf("Informe os elementos[%d]: \n", i + 1);
        for(int j = 0; j < tamanhoColunas; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Vetor gerado: \n");
    for(int i = 0; i < tamanhoLinhas; i++){
        somaLinha = 0;
        for(int j = 0; j < tamanhoColunas; j++){
            somaLinha += matriz[i][j];
        }
        printf("%.2f\n", somaLinha);
    }
    return 0;
}