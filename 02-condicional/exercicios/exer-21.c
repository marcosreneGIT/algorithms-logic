// aumento

#include <stdio.h>

int main (void){
    float atualSalario, novoSalario, aumentoMonetario, aumentoPorcentagem;

    printf("Informe o salario atual: ");
    scanf("%f", &atualSalario);

    if (atualSalario <= 1000){
        aumentoPorcentagem = 20;
    }
    else if (atualSalario <= 3000){
        aumentoPorcentagem = 15;
    }
    else if (atualSalario <= 8000){
        aumentoPorcentagem = 10;
    }
    else{
        aumentoPorcentagem = 5;
    }
    
    aumentoMonetario = atualSalario * (aumentoPorcentagem / 100);
    novoSalario = atualSalario + aumentoMonetario;

    printf("Novo salario: R$%.2f", novoSalario);
    printf("\nAumento: R$%.2f", aumentoMonetario);
    printf("\nPorcentagem: %.0f%%", aumentoPorcentagem);
    
    return 0;

}