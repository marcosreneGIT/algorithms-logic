//vetor

#include <stdio.h>

int main(void){
    int tamanhoLista;

    printf("Informe quantos numeros voce ira digitar: ");
    scanf("%d", &tamanhoLista);

    float numeros[tamanhoLista];

    for (int i = 0; i < tamanhoLista; i++){
        printf("Informe um numero: ");
        scanf("%f", &numeros[i]);
    }

    printf("\nNUMEROS DIGITADOS: ");
    for (int j = 0; j < tamanhoLista; j++){
        printf("\n%.1f", numeros[j]);
    }

    return 0;
}