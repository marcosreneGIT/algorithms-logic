// coordenadas

# include <stdio.h>

int main(void){
    float x, y;
    char *quadrante;

    printf("Informe o valor de X: ");
    scanf("%f", &x);

    printf("Informe o valor de Y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0){
        quadrante = "Q1";
    }
    else if (x < 0 && y > 0){
        quadrante = "Q2";
    }
    else if (x < 0 && y < 0){
        quadrante = "Q3";
    }
    else if (x > 0 && y < 0){
        quadrante = "Q4";
    }
    else if (x == 0 && y != 0){
        quadrante = "Eixo Y";
    }
    else if (x != 0 && y == 0){
        quadrante = "Eixo X";
    }
    else{
        quadrante = "Origem";
    }

    printf("%s", quadrante);
    
    return 0;
}