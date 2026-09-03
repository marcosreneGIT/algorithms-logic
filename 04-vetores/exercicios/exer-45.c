//soma vetores

#include <stdio.h>

int main(void){
    int tamanhoVetor;

    printf("Informe quantos valores ira digitar: ");
    scanf("%d", &tamanhoVetor);

    int 
    vetorA[tamanhoVetor],
    vetorB[tamanhoVetor], 
    vetorC[tamanhoVetor];
    
    printf("\nInforme os valores do vetor A:\n");
    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetorA[i]);
    }
    
    printf("\nInforme os valores do vetor B:\n");
    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetorB[i]);
    }

    printf("\nSoma dos vetores: ");
    for(int i = 0; i < tamanhoVetor; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    for(int i = 0; i < tamanhoVetor; i++){
        printf("\n%d", vetorC[i]);
    }

    return 0;
}