//sequecia impares

#include <stdio.h>

int main(void){
    int x;

    printf("Informe um valor inteiro: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}