//aprovados

#include <stdio.h>

int main(void){
    int tamanhoVetor;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &tamanhoVetor);

    char 
    nomeAlunos[tamanhoVetor][50];

    float 
    notaPrimeiroSemestre[tamanhoVetor],
    notaSegundoSemestre[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Informe o [NOME], [PRIMEIRA] e [SEGUNDA] [NOTA] do aluno: \n");
        scanf("%s", nomeAlunos[i]);
        scanf("%f", &notaPrimeiroSemestre[i]);
        scanf("%f", &notaSegundoSemestre[i]);

    }

    printf("Aluno aprovados: \n");
    for(int i = 0; i < tamanhoVetor; i++){
        if((notaPrimeiroSemestre[i] + notaSegundoSemestre[i]) / 2 >= 6){
            printf("%s", nomeAlunos[i]);
        }
        
    }

    return 0;
}