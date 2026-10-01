// tabuada

#include <stdio.h>

int main (void){
    int numeroTabuada;

    printf("Informe o valor da tabuada: ");
    scanf("%d", &numeroTabuada);

    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada * i);
    }

    return 0;
}