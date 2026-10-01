// divisao

#include <stdio.h>

int main(void){
    int casosDigitados;
    float numerador, denominador;

    printf("\nInforme quantos casos voce vai digitar: ");
    scanf("%d", &casosDigitados);

    for(int i = 0; i < casosDigitados; i++){
        printf("\nInforme um numeroador: ");
        scanf("%f", &numerador);

        printf("\nInforme um denominador: ");
        scanf("%f", &denominador);

        if(denominador == 0){
            printf("\nDivisao impossivel!");
        }
        else{
             printf("\nDivisao: %.2f", numerador / denominador);
        }
    }
    return 0;
}