// soma impares

#include <stdio.h>

int main(void){
    int 
    numero01, 
    numero02, 
    imparSoma = 0;

    printf("Informe dois numeros: \n");
    scanf("%d", &numero01);
    scanf("%d", &numero02);

    int 
    menorNumero = numero01,
    maiorNumero = numero02;

    if (numero02 < menorNumero){
    menorNumero = numero02;
    maiorNumero = numero01;
  }

    for (int i = menorNumero + 1; i < maiorNumero; i++){
        if (i % 2 != 0){
            imparSoma += i; 
        }
    }
    printf("Soma dos numeros impares: %d", imparSoma);
    return 0;
}   