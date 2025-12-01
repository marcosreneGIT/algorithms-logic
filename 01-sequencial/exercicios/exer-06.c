// Circulo

#define _USE_MATH_DEFINES
#include <math.h>

#include <stdio.h>

int main(void){
    float r, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &r);

    area = M_PI * pow(r, 2);

    printf("Area: %.3f", area);
   
}