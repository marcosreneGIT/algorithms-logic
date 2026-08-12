// tempo de jogo

# include <stdio.h>

int main(void){
    int inicialHora, finalHora, tempoJogo;

    printf("Hora inicial: ");
    scanf("%d", &inicialHora);

    printf("Hora final: ");
    scanf("%d", &finalHora);
    
    if (inicialHora >= finalHora){
        tempoJogo =  24 - inicialHora + finalHora; 
    }
    else{
        tempoJogo = finalHora - inicialHora;
    }

    printf("O jogo durou: %dH", tempoJogo);

    return 0;

}