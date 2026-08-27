//dentro fora

#include <stdio.h>

int main(void){
    int n, x, 
    dentro = 0, 
    fora = 0;

    printf("Informe a quantidade de numeros que serao digitados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("\nInforme um numero: ");
        scanf("%d", &x);

        if (x >= 10 && x <= 20){
            dentro += 1;
        }
        else{
            fora += 1;
        }
    }

    printf("\nDentro: %d\n"
            "Fora: %d", dentro, fora);

    return 0;
}