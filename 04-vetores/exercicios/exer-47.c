// media pares

#include <stdio.h>

int main(void){
    int tamanhoVetor, somaPar = 0, mediaPar = 0;

    printf("Informe a quantidade de elementos: ");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Informe um numero: ");
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            somaPar += vetor[i];
            mediaPar += 1;
        }
    }

    if(somaPar != 0){
        printf("\nMedia dos pares: %d", somaPar / mediaPar);
    }
    else{
        printf("\nNenhum numero par!");
    }

    return 0;
}