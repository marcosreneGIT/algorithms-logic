// Retangulo

#include <stdio.h>
#include <math.h>

int main(void)
{
    float base, altura, area, perimetro, diagonal;

    printf("\nBase do retangulo: ");
    scanf("%f", &base);

    printf("Altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("\nArea: %.4f", area);
    printf("\nPerimetro: %.4f", perimetro);
    printf("\nDiagonal: %.4f", diagonal);

    return 0;
}
