// medias idades

#include <stdio.h>

int main(void){
    float idade, somaIdade = 0, quantidadeIdade = 0;

    printf("Digite as idades: \n");
    scanf("%f", &idade);

    while (idade >= 0){
        
        if (idade > 0){  
        quantidadeIdade += 1;          
        somaIdade += idade;
        }
        scanf("%f", &idade);
    }

    if (quantidadeIdade > 0){
    printf("Media de idades: %.2f", somaIdade / quantidadeIdade);
    }else{
        printf("Impossivel calcular!");
    }
    return 0;
}