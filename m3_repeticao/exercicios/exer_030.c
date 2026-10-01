// notas

#include <stdio.h>

int main(void){
    float 
    nota01, 
    nota02, 
    media = 0;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota01);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota02);

    while (nota01 < 0 || nota01 > 10 ||
           nota02 < 0 || nota02 > 10)
    {
       if (nota01 < 0 || nota01 > 10){
            printf("\nPrimeira nota invalida!\nInforme novamente: ");
            scanf("%f", &nota01);
       }
       else{
            printf("\nSegunda nota invalida!\nInforme novamente: ");
            scanf("%f", &nota02);
       }
  
    }

    media = (nota01 + nota02) / 2;
    printf("\nMedia: %.2f", media);

    return 0;
}