#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
    int opcao,palpite_numb,computer,jogador_1,jogador_2,resultado;

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
                linhas_pequenas();
                printf("Você quer jogar com o computador, muito bom!\n");
                printf("Vamos lá então, digite um número de 1 até 10\n");
                scanf("%d", &palpite_numb);

                if(palpite_numb == computer){
                    linhas_pequenas();
                    printf("O seu número foi (%d)\n", palpite_numb);
                    printf("O número do computador foi (%d)\n", computer);
                    printf("Parabéns, você acertou o número!\n");
                }
                else{
                    printf("O seu número foi (%d)\n", palpite_numb);
                    printf("O número do computador foi (%d)\n", computer);
                    printf("Que pena, mas você perdeu!\n");
                }
            }
            else if (opcao == 2){
                printf("Para este modo se recomenda que leia as regras no menu antes de iniciar\n");
                printf("Jogador_01:");
                scanf("%d", &jogador_1);
                printf("Jogador_02: ");
                scanf("%d", &jogador_2);

                resultado = jogador_1 == jogador_2 ? 1 : 0;
                
                if (resultado == 1){
                    printf("O jogador_01 digitou (%d)\n", jogador_1);
                    printf("O jogador_02 digitou (%d)\n", jogador_2);
                    printf("Houve um Ruffis!!! Parabéns\n");

                }
                else{
                    printf("O jogador_01 digitou (%d)\n", jogador_1);
                    printf("O jogador_02 digitou (%d)\n", jogador_2);
                    printf("Que pena, não foi desta vez!\n");
                }
            }

            break;
        case 2:
        linhas_grandes();
            printf("Bem-vindo ao REFI FIVE!\n"
                   "Esta parte do jogo é dedicada a explicar as regras para o jogo escolhido.\n"
                   "O jogo de Adivinhação é muito divertido e traz algumas mecânicas interessantes. Vamos às regras:\n");
            linhas_pequenas();
            printf("1. Modo Jogador x Computador\n"
                   "Se você optar por jogar contra o computador, é bem simples:\n"
                   "basta escolher um número entre 1 e 10. O computador, por sua vez, irá gerar um número aleatório\n"
                   "usando um algoritmo de geração pseudoaleatória (LCG – Linear Congruential Generator).\n"
                   "Após isso, vamos comparar o número digitado por você com o número sorteado pelo computador e ver quem ganhou!\n");
            linhas_pequenas();
            printf("2. Modo Jogador x Jogador\n"
                   "Se você escolher o modo de dois jogadores, o importante é que tenha alguém para jogar com você, pois isso\n"
                   "tornará a experiência mais divertida e competitiva! Cada jogador deve escolher um número entre 1 e 10.\n"
                   "Se os dois jogadores acertarem o número, ocorre um evento especial chamado RUFFIS, um momento raro e emocionante onde ambos escolhem o mesmo número.\n"
                   "Isso não acontece com o computador, já que os números do computador são gerados aleatoriamente, mas entre humanos, as escolhas podem coincidir.\n");
            linhas_pequenas();
            printf("O que significa (RUFFIS)?\n"
                   "RUFFIS é uma sigla que descreve o momento em que os dois jogadores acertam o mesmo número. Cada letra tem um significado:\n");
            printf("R: Refletir\n");
            printf("U: Unir\n");
            printf("F: Fazer\n");
            printf("F: Fiz\n");
            printf("I: Irreal\n");
            printf("R: Real\n");
            printf("Essas palavras representam o conceito de um momento raro e único no jogo.\n"
                   "Se você não entendeu totalmente, não se preocupe – só jogando você entenderá completamente o que significa RUFFIS!\n");
            linhas_grandes();
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