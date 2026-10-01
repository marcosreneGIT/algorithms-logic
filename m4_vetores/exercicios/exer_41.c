//soma vetor 

#include <stdio.h>

int main(void){
    int tamanhoLista;

    printf("Informe quantos numeros vai digitar: ");
    scanf("%d", &tamanhoLista);

    float 
    numeros[tamanhoLista], 
    soma = 0;

    for(int i = 0; i < tamanhoLista; i++){
        printf("Informe um numero: ");
        scanf("%f", &numeros[i]);

        soma += numeros[i];
    }

    printf("\nValores:");
    for(int i = 0; i < tamanhoLista; i++){
        printf(" %.1f", numeros[i]);
    }
    printf("\nSoma: %.2f", soma);
    printf("\nMedia: %.2f", soma / tamanhoLista);

    return 0;
}