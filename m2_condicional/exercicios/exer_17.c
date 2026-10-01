// dardos

#include <stdio.h>

int main(void){
    float 
    maiorLancamento,
    metrosLancamento01, 
    metrosLancamento02, 
    metrosLancamento03;

    printf("Informe as TRES distancias: \n");
    scanf("%f", &metrosLancamento01);
    scanf("%f", &metrosLancamento02);
    scanf("%f", &metrosLancamento03);

    maiorLancamento = metrosLancamento01;

    if (metrosLancamento02 > maiorLancamento || metrosLancamento03 > maiorLancamento){
        maiorLancamento = metrosLancamento02;
        if (metrosLancamento03 > maiorLancamento){
            maiorLancamento = metrosLancamento03;
        }
    }
    printf("Maior distancia: %.2f", maiorLancamento);

    return 0;

}