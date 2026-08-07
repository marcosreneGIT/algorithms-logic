//glicose

#include <stdio.h>

int main(void){
    float nivelGlicose;
    char *classificacaoGliscose;

    printf("Informe seu nivel de glicose: ");
    scanf("%f", &nivelGlicose);

    if (nivelGlicose <= 100){
        classificacaoGliscose = "Normal";
    }
    else if (nivelGlicose <= 140){
        classificacaoGliscose = "Elevado";
    }
    else{
        classificacaoGliscose = "Diabetes";
    }

    printf("Classificacao: %s", classificacaoGliscose);

    return 0;
}