// negativos

#include <stdio.h>

int main(void){
    int quantidadeNumeros;

    printf("Informe quantos numeros ira digitar: ");
    scanf("%d", &quantidadeNumeros);

    int numeros[quantidadeNumeros];
    
    for(int i = 0; i < quantidadeNumeros; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }
    printf("\nNUMEROS NEGATIVOS: ");
    for(int j = 0; j < quantidadeNumeros; j++){
        if (numeros[j] < 0){
            printf("\n%d", numeros[j]);
        }
    }
    return 0;
}