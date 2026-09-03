//numeros pares

#include <stdio.h>

int main(void){
    int 
    quantidadeNumeros = 0, 
    quantidadePar = 0;

    printf("Informe a quantidade de numeros digitados: ");
    scanf("%d", &quantidadeNumeros);

    int numeros[quantidadeNumeros];

    for (int i = 0; i < quantidadeNumeros; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
            quantidadePar += 1;
        }
    }

    int numerosPar[quantidadePar], posicaoPar = 0;

    for(int i = 0; i < quantidadeNumeros; i++){
        if(numeros[i] % 2 == 0){
            numerosPar[posicaoPar] = numeros[i];
            posicaoPar += 1;

        }
    }
    printf("\nNumeros pares:");

    for(int i = 0; i < quantidadePar; i++){
        printf(" %d", numerosPar[i]);

    }
    printf("\nQuantidade de PARES: %d", quantidadePar);

    return 0;


}