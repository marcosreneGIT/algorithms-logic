//bhaskara 

#include <stdio.h>
#include <math.h>

int main (void){
    float 
    coeficienteA,
    coeficienteB, 
    coeficienteC,
    raizX1, 
    raizX2,
    delta;

    printf("Informe o coeficiente a: ");
    scanf("%f", &coeficienteA);
    
    printf("Informe o coeficiente b: ");
    scanf("%f", &coeficienteB);
    
    printf("Informe o coeficiente c: ");
    scanf("%f", &coeficienteC);

    delta = pow(coeficienteB, 2) - (4 * coeficienteA * coeficienteC);
    
    if (coeficienteA != 0 && delta >= 0){
        
        raizX1 = (-coeficienteB + sqrt(delta)) / (2 * coeficienteA);
        raizX2 = (-coeficienteB - sqrt(delta)) / (2 * coeficienteA);

        printf("\nRaiz X1: %.4f\n"
               "Raiz X2: %.4f", raizX1, raizX2);

        return 0;
    }
    printf("Esta equacao nao e plausivel!");
    return 0;

} 