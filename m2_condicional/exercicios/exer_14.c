// operadora 

#include <stdio.h>

int main(void){
    int tempoGasto, tempoExtra, tempoPlano = 100; // minutos
    float valorPlano = 50; // reais

    printf("Informe a quantidade de minutos: ");
    scanf("%d", &tempoGasto);

    if (tempoGasto > tempoPlano){
        tempoExtra = tempoGasto - tempoPlano;

        valorPlano += (tempoExtra * 2);
    }
    printf("Valor a pagar: R$%.2f", valorPlano);

    return 0;
}