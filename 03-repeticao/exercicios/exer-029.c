// quadrante

#include <stdio.h>

int main(void){
    int x = 1, y = 1;

    while ((x != 0) && (y != 0)){
        printf("\n\nInforme os valores de X e Y: \n");
        scanf("%d", &x);
        scanf("%d", &y);
        printf("\n");

        if (x > 0 && y > 0){
            printf("QUADRANTE Q1");
        }
        else if (x < 0 && y > 0){
            printf("QUADRANTE Q2");    
        }
        else if (x < 0 && y < 0){
            printf("QUADRANTE Q3");
        }
        else if (x > 0 && y < 0){
            printf("QUADRANTE Q4");
        }
    }
    return 0;
}