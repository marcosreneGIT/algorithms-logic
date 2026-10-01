// Medidas

#include <stdio.h> 
#include <math.h>

int main(void){
    float A, B, C,
    areaQuadrado, areaTriangulo, areaTrapezio;

    printf("A: ");
    scanf("%f", &A);
    printf("B: ");
    scanf("%f", &B);
    printf("C: ");
    scanf("%f", &C);
    
    areaQuadrado = pow(A, 2);
    areaTriangulo = (A * B) / 2; 
    areaTrapezio = (A + B) * C / 2;

    printf("\nArea do quadrado: %.4f", areaQuadrado);
    printf("\nArea do triangulo: %.4f", areaTriangulo);
    printf("\nArea do trapezio: %.4f", areaTrapezio);


}
