// while

# include <stdio.h>

int main(void){
    int numero, soma;

    printf("Informe o primeiro numero: ");
    scanf("%d", &numero);

    soma = 0;
    while (numero != 0)
    {
        printf("Informe outro numero: ");
        scanf("%d", &numero);

        soma += numero;
    }
    
    printf("Soma: %d", soma);
    return 0;
}