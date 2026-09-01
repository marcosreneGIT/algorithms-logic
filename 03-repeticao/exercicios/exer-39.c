// experiencias

#include <stdio.h>

int main(void){
    char tipoCobaia;

    int 
    quantidadeTestes,
    quantidadeCobaias = 0,
    quantidadeCoelhos = 0,
    quantidadeRatos = 0,
    quantidadeSapos = 0;

    float 
    percentualCoelho,
    percentualRatos,
    percentualSapos;

    printf("\nInforme a quantidade de testes: ");
    scanf("%d", &quantidadeTestes);

    for (int i = 0; i < quantidadeTestes; i++){
        printf("\nInforme a quantidade de cobaias: ");
        scanf("%d", &quantidadeCobaias);

        printf("Informe o tipo de cobaia: ");
        scanf(" %c", &tipoCobaia);

        switch (tipoCobaia)
        {
        case 'C':
            quantidadeCoelhos += quantidadeCobaias;
            break;
        case 'R':
            quantidadeRatos += quantidadeCobaias;
            break;
        case 'S':
            quantidadeSapos += quantidadeCobaias;
            break;
        default:
            break;
        }

    }
    quantidadeCobaias = quantidadeCoelhos + quantidadeRatos + quantidadeSapos;
    percentualCoelho = (quantidadeCoelhos * 100) / quantidadeCobaias;
    percentualRatos = (quantidadeRatos * 100) / quantidadeCobaias;
    percentualSapos = (quantidadeSapos * 100) / quantidadeCobaias;
    

    printf("\nRELATO FINAL"
            "\nCOBAIAS: %d"
            "\nCOELHOS: %d %.2f%%"               
            "\nRATOS: %d %.2f%%"
            "\nSAPOS: %d %.2f%%", 
            quantidadeCobaias, 
            quantidadeCoelhos,
            percentualCoelho, 
            quantidadeRatos, 
            percentualRatos,
            quantidadeSapos,
            percentualSapos);

    return 0;
}