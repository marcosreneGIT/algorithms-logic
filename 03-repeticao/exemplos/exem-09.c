// soma numeros

#include <stdio.h>

int main(void){
    int numeros, numeroSomados, numerosQuantidade;

    printf("Informe a quantidade de numeros somados: ");
    scanf("%d", &numerosQuantidade);

    numeroSomados = 0;
    for (int i=0; i < numerosQuantidade; i++){
        printf("Informe os numeros que serao somados: ");
        scanf("%d", &numeros);

        numeroSomados += numeros;
    }

    printf("Soma: %d", numeroSomados);

    return 0;
}