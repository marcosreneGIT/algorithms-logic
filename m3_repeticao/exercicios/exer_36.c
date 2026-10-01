// media ponderada 

#include <stdio.h>

int main(void){
    int casosDigitados;
    float nota01, nota02, nota03, media;

    printf("Informe quantos cosos voce vai digitar: "); 
    scanf("%d", &casosDigitados);

    for(int i = 0; i < casosDigitados; i++){
        media = 0;

        printf("\nInforme os tres numeros: \n");
        scanf("%f", &nota01);
        scanf("%f", &nota02);
        scanf("%f", &nota03);

        media = ((nota01 * 2 + nota02 * 3 + nota03 * 5) / 10);
        printf("\nMedia: %.2f", media);
    }

    return 0;
}