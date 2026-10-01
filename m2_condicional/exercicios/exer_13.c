// menor de tres

#include <stdio.h>

int main (void){
    int num1, num2, num3, menorNum;

    printf("Informe o numero(1): ");
    scanf("%d", &num1);

    printf("Informe o numero(2): ");
    scanf("%d", &num2);

    printf("Informe o numero(3): ");
    scanf("%d", &num3);

    menorNum = num1;

    if (num2 < menorNum || num3 < menorNum){
        menorNum = num2;
        if (num3 < menorNum){
            menorNum = num3;
        }
    }

    printf("O menor numero: %d", menorNum);

    return 0;
}