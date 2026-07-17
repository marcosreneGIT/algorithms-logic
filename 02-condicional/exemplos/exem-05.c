// teste condicional

#include <stdio.h>

int main(void){
    int hora;

    printf("Digite uma hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12){
        printf("Bom dia!");
    }
    else{
        if (hora > 18){
            printf("Boa noite!");
        }
        else{
            printf("Boa tarde!");
        }
        
    }
    return 0;
}
