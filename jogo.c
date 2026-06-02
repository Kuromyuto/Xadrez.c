#include <stdio.h>

    void movimentoTorre(int casas){
    if(casas > 0){
    printf("Direita\n");
    movimentoTorre(casas - 1);
        }
    }

    void movimentoRainha(int casas){
    if(casas > 0){
    printf("Cima\n");
    movimentoRainha(casas - 1);
        }
    }

    void movimentoCavalo(int casas){
        if(casas > 0){
        printf("Cima\n");
        movimentoCavalo(casas - 1);
        }
    }

    void movimentoBispo(int casas){
        if(casas > 0){
        printf("Esquerda\n");
        movimentoBispo(casas - 1);
        }
    }


int main(){
    
    
    //VARIAVEIS DO JOGO
    int decisao, rei, bispo, torre, i;
    char decisao2;
    
    //ENTRADA DO JOGO
    printf("## XADREZ EM C ##\n");
    printf("1. Começar o jogo\n");
    printf("2. Regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &decisao);

    if (decisao != 3) {
    switch (decisao)
    {
    case 1:
        printf("Você tem Rei, Bispo, Torre e Cavalo, Qual das peças deseja seguir");
        printf("R. Rei\n");
        printf("B. Bispo\n");
        printf("T. Torre\n");
        printf("C. Cavalo\n");
        scanf(" %c", &decisao2);

        switch (decisao2)
        {
        case 'R':
        case 'r':
            printf("Você escolheu Rei\n");
            movimentoRainha(8);
            break;
        case 'B':
            printf("Você escolheu Bispo\n");
            movimentoBispo(5);
            break;
        case 'T':
            printf("Você escolheu Torre!\n");
            movimentoTorre(5);
            break;
            case 'C':
            printf("Você escolheu Cavalo\n");
           movimentoCavalo(5);
            break;
        default:
            printf("Opção invalida!\n");
            break;
        }
        break;
    case 2:
        printf("Execute movimentos necessários para vencer todas as peças do jogo\n");
        break;
    case 3:
        printf("Saindo...");
        break;    
    default:
        printf("Opção invalida");
        break;
    }

    }
   return 0;
}