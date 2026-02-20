// Duracao

#include <stdio.h>

int main(void){
    int segundosInformados,
    horas, minutos, segundos;

    printf("Informe a duracao em segundos: ");
    scanf("%d", &segundosInformados);

    segundos = segundosInformados % 60;
    minutos = segundosInformados / 60 % 60;
    horas = segundosInformados / 60 / 60;

    printf("%d:%d:%d", horas, minutos, segundos);
}