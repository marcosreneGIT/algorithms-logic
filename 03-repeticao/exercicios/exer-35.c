//par impar 

#include <stdio.h>

int main(void){
    int 
    numeroRepeticao, 
    numeroParImpar;

    char 
    *parImpar, 
    *positivoNegativo;

    printf("\nInforme quantos numeros voce ira digitar: ");
    scanf("%d", &numeroRepeticao);

    for (int i = 0; i < numeroRepeticao; i++){
        printf("\nInforme um numero: ");
        scanf("%d", &numeroParImpar);

        if (numeroParImpar == 0){
            parImpar = "NULO";
            positivoNegativo = " ";
        }
        else{
            if (numeroParImpar % 2 == 0){
                parImpar = "PAR";
            }
            else{
                parImpar = "IMPAR";
            }
            if (numeroParImpar > 0){
                positivoNegativo = "POSITIVO";
            }
            else{
                positivoNegativo = "NEGATIVO";
            }
        }

        printf("%s %s\n", parImpar, positivoNegativo);
    }
    return 0;
}