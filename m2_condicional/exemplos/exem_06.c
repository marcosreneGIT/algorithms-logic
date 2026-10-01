// teste dias

#include <stdio.h>

int main(void){
    int x;
    char *dia;

    printf("Informe o dia: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        dia = "Domingo";
        break;
    case 2: 
        dia = "Segunda";
        break;
    case 3:
        dia = "Terca";
        break;
    case 4: 
        dia = "Quarta";
        break;
    case 5:
        dia = "Quinta";
        break;
    case 6: 
        dia = "Sexta";
        break;
    case 7:
        dia = "Sabado";
        break;
    
    default:
        dia = "Valor invalido!";
        break;
    }

    printf("Dia da semana: %s", dia);

}