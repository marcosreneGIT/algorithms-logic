// Consumo

#include <stdio.h>

int main(void){
    float distanciaPercorrida, combustivelGasto, consumoMedio;

    printf("Informe a distancia percorrida (km): ");
    scanf("%f", &distanciaPercorrida);
    printf("Informe o combustivel gasto: ");
    scanf("%f", &combustivelGasto);

    consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("\nConsumo medio: %.3f", consumoMedio);

    return 0;
}