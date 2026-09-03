//abaixo da media 

#include <stdio.h>

int main(void){
    int tamanhoVetor;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    float 
    vetor[tamanhoVetor],
    somaVetor = 0,
    mediaVetor;

    for (int i = 0; i < tamanhoVetor; i++){
        printf("Informe um valor: ");
        scanf("%f", &vetor[i]);

        somaVetor += vetor[i];
    }

    mediaVetor = somaVetor / tamanhoVetor;
    printf("\nMedia do vetor: %.3f", mediaVetor);
    printf("\nElementos abaixo da media\n");
    for(int i = 0; i < tamanhoVetor; i++){
        if(vetor[i] < mediaVetor){
            printf("\n%.1f", vetor[i]);
        }
    }
    return 0;
}
