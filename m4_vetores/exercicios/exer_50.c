//dados pessoas

#include <stdio.h>

int main(void){
    int
    tamanhoVetor,
    totalM = 0;
   

    printf("Informe a quantidade de pessoas registradas: ");
    scanf("%d", &tamanhoVetor);

    float 
    altura[tamanhoVetor],
    maiorAltura,
    menorAltura,
    mediaAlturaF = 0;

    char genero[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        printf("\nInforme a altura [%d]: ", i + 1);
        scanf("%f", &altura[i]);
        printf("Infore o genero  [%d]: ", i + 1);
        scanf(" %c", &genero[i]);
    }

    menorAltura = altura[0];
    maiorAltura = altura[0];

    for(int i = 0; i < tamanhoVetor; i++){
        if(altura[i] > maiorAltura){
            maiorAltura = altura[i];
        }
        if(altura[i] < menorAltura){
            menorAltura = altura[i];
        }
        if(genero[i] == 'F'){
            mediaAlturaF += altura[i];
        }
        if(genero[i] == 'M'){
            totalM += 1;
        }
    }

    printf(
        "\nMenor altura: %.2f"
        "\nMaior altura: %.2f"
        "\nMedia altura F: %.2f"
        "\nTotal M: %d",
        menorAltura,
        maiorAltura,
        mediaAlturaF / (tamanhoVetor - totalM),
        totalM
    );

    return 0;
}