//alturas

#include <stdio.h>

int main(void){
    int tamanhoListas, menorIdade = 0;

    printf("Informe a quantidade de pessoas registradas: ");
    scanf("%d", &tamanhoListas);

    char nome[tamanhoListas][50];
    int idade[tamanhoListas];
    float altura[tamanhoListas], somaAltura = 0;

    for(int i = 0; i < tamanhoListas; i++){
        printf("\nDados da pessoa[%d]: ", i + 1);
        printf("\nNome: ");
        scanf(" %49s", nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);
        
        somaAltura += altura[i];

        if (idade[i] < 18){
            menorIdade += 1;
        }
    }

    printf("\nAltura media: %.2f", somaAltura / tamanhoListas);
    printf("\nMenores de idade: %.2f%%", (float)menorIdade * 100 / tamanhoListas);

    for(int i = 0; i < tamanhoListas; i++){
        if (idade[i] < 18){
            printf("\n%s", nome[i]);
        }
    }
    return 0;
}