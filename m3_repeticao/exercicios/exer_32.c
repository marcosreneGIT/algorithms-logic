// pares consecutivos

#include <stdio.h>

int main(void){
    int x, y, somaPar;
do
{
    printf("\n\nInforme um numero inteiro: ");
    scanf("%d", &x);
    y = x;

    somaPar = 0;

    if (x != 0){
        for(int i = x; i < x + 10; i++)
        {
            if (y % 2 == 0){
                somaPar += y;
            }
            y += 1;
        }
        printf("Soma dos pares: %d", somaPar);
    }    
} while (x != 0);

    return 0; 
    
}