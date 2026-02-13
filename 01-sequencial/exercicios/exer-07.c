//Pagamento

#include <stdio.h>

int main(void){
    char nomeFuncionario[50];
    float salarioHora;
    int horasTrabalhadas;
    float valorPagamento;

    printf("\nNome do funcionario: ");
    scanf("%s", nomeFuncionario);
    printf("Valor ganho por hora: ");
    scanf("%f", &salarioHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    valorPagamento = salarioHora * horasTrabalhadas;

    printf("\nO pagamento de %s"
        " e no valor de %.2f", nomeFuncionario, valorPagamento);

    return 0;

}