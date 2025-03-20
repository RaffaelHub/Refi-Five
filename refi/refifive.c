#include <stdio.h>
#include <stdlib.h>


void linhas_grandes(){
    printf("-------------------------------------------------- \n"
           "-------------------------------------------------- \n"
           "-------------------------------------------------- \n"
           "-------------------------------------------------- \n"
           "-------------------------------------------------- \n");
}

void linhas_pequenas(){
    printf("--------------------------------------------------\n"
           "--------------------------------------------------\n");
}


int main(){
    srand(time(0));
    int opcao,palpite_numb,computer;

    linhas_pequenas();
    printf("### BEM VINDO! ###\n");
    printf("       AO              \n");
    printf("    REFI-FIVE\n");
    linhas_pequenas();
    printf("A seguir você tem 5 opções de jogos gratuitos para jogar a vontade!\n"
           "Escolha uma das opções digitando o respectivo número\n");

    printf("1 - Jogo de adivinhar\n");
    printf("2 - Jogo de Jokenpo\n");
    printf("3 - jogo da forca\n");
    printf("4 - Jogo de xadres\n");
    printf("5 - Jogo de batalha naval\n");
    scanf("%d", &opcao);
    linhas_pequenas();

    switch(opcao)
    {
    case 1:
        printf("MENU\n");
        printf(" 1 - Iniciar jogo\n");
        printf(" 2 - Regras\n");
        printf(" 3 - Controles\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            linhas_pequenas();
            printf("Pretende jogar de dois jogadores ou com o computador?\n");
            printf("1 - Jogar com o computador\n");
            printf("2 - Jogar de dois\n");
            scanf("%d", &opcao);

            if (opcao == 1){
                
                computer = rand() % 10 + 1;
                printf("Você quer jogar com o computador, muito bom!\n");
                printf("Vamos lá então, digite um número de 1 até 10\n");
                scanf("%d", &palpite_numb);

                if(palpite_numb == computer){
                    printf("O seu número foi (%d)\n", palpite_numb);
                    printf("O número do computafor foi (%d)\n", computer);
                    printf("Você acertou o número!\n");
                }
                else{
                    printf("O seu número foi (%d)\n", palpite_numb);
                    printf("O número do computafor foi (%d)\n", computer);
                    printf("Você errou o número!\n");
                }
            }
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("Valor inválido\n");
            break;

        }


        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        printf("Valor inválido\n");
        break;

    }

    return 0;

}