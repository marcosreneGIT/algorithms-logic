// combustivel

# include <stdio.h>

int main(void){
    int voto = 0, 
    votoAlcool = 0, // 1
    votoGasolina = 0, // 2
    votoDeisel = 0; // 3

    while (voto != 4){
        printf(
        "\n[1]Alcool\n"
        "[2]Gasolina\n"
        "[3]Diesel\n"
        "[4]Sair\n"
        "\nInforme um codigo: ");

        scanf("%d", &voto);

        if(voto < 1 || voto > 4){
            continue;
        }

        switch (voto)
        {
        case 1:
            votoAlcool += 1;
            break;
        case 2:
            votoGasolina += 1;
            break;
        case 3: 
            votoDeisel += 1;
            break;
        }

    }

    printf("\nMuito obrigado!\n"
            "\nAlcool: %d"
            "\nGasolina: %d"
            "\nDiesel: %d", votoAlcool, votoGasolina, votoDeisel);

    return 0;

}