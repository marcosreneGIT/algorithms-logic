//fatorial

#include <stdio.h>

int main(void){
    int numero, fatorial = 1;

    printf("Informe o valor de N: ");
    scanf("%d", &numero);

    if (numero <= 15 && numero >= 0){
        for (int i = numero; i >= 1; i--){
            fatorial *= i;
        }
        printf("\nFatorial: %d", fatorial);
        return 0;
    }
    printf("Valor maximo excedido! (n > 15)");
    return 0;
}