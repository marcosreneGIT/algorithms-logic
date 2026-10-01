//notas

#include <stdio.h>

int main(void){
    float nota1, nota2, notaFinal;

    printf("Informe nota(1): ");
    scanf("%f", &nota1);

    printf("Informe nota(2): ");
    scanf("%f", &nota2);

    notaFinal = nota1 + nota2;

    printf("\nNota final: %.1f", notaFinal);
    if (notaFinal < 60){
        printf("\nReprovado!");
    }

    return 0;
}