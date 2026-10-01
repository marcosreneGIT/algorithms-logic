//maior posicao

#include <stdio.h>

int main(void){
    int tamanhoVetor, maiorNumero, maiorIndice = 0;

    printf("Informe quantos numeros ira digitar: ");
    scanf("%d", &tamanhoVetor);

    int numeros[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }

    maiorNumero = numeros[0];

    for(int i = 1; i < tamanhoVetor; i++){
        if(numeros[i] > maiorNumero){
            maiorNumero = numeros[i];
            maiorIndice = i;
        }
    }

    printf("\nMaior valor: %d"
            "\nPosicao do maior valor: %d", maiorNumero, maiorIndice);

    return 0;
}