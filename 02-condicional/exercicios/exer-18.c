// temperatura

#include <stdio.h>

int main (void){
    float valorTemperatura, conversaoTemperatura;
    char escalaTemperatura;

    printf("Declare qual escala de temperatura voce deseja converter [C|F]: ");
    scanf("%s", &escalaTemperatura);

    if (escalaTemperatura == 'C'){
        printf("Informe a temperatura em FAHRENHEINT: ");
        scanf("%f", &valorTemperatura);

        conversaoTemperatura = (valorTemperatura - 32) * 5 / 9;
        printf("Temperatura equivalente em CELCIUS: %.2f", conversaoTemperatura);
    }
    else if (escalaTemperatura == 'F'){
        printf("Informe a temperatura em CELSIUS: ");
        scanf("%f", &valorTemperatura);

        conversaoTemperatura = ((valorTemperatura * 9) / 5) + 32;
        printf("Temperatura equivalente em FAHERNHEINT: %.2f", conversaoTemperatura);
    }
    else{
        printf("Opcao invalida!");
    }
    return 0;

}