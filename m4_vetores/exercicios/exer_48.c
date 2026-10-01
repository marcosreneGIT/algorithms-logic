//mais velho

#include <stdio.h>

int main(void){
    int tamanhoVetor, maiorIdade;
    char *nomeMaiorIdade;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    char nomes[tamanhoVetor][50];
    int idades[tamanhoVetor];
    
    printf("\nInformacoes pessoais: \n");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("Nome: ");
        scanf("%s", nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("---\n");
    }

    maiorIdade = idades[0];
    nomeMaiorIdade = nomes[0];

    for(int i = 0; i < tamanhoVetor; i++){
        if(idades[i] > maiorIdade){
            nomeMaiorIdade = nomes[i];
        }
    }

    printf("\nMais velho(a): %s", nomeMaiorIdade);

    return 0;
}