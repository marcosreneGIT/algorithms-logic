// multiplos

# include <stdio.h>

int main(void){
    int 
    numero01, 
    numero02, 
    multiplo, 
    maiorNumero;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d", &numero01);
    scanf("%d", &numero02);

    maiorNumero = numero01;
    if (numero02 > maiorNumero){
        maiorNumero = numero02;
    }

    multiplo = numero01 % numero02;
    if (multiplo == 0){
        printf("Multiplos.");
    }
    else{
        printf("Nao multiplos.");
    }

    return 0;
}