// senha fixa

#include <stdio.h>

int main(void){
    int 
    tentativaSenha,
    senha = 2002;
    
    printf("Informe a senha: ");
    scanf("%d", &tentativaSenha);
    
    while (tentativaSenha != senha){
        printf("\nSenha invalida!\nTente novamente: ");
        scanf("%d", &tentativaSenha);

    }

    printf("\nAcesso permitido!");
    

}