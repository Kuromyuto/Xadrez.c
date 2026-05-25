#include <stdio.h>

int main(){
    
    //VARIAVEIS DO JOGO
    int decisao, decisao2, rei, bispo, torre;
    
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
        printf("Você tem Rei, Bispo e torre, Qual das peças deseja seguir");
        printf("1. Rei\n");
        printf("2. Bispo\n");
        printf("3. Torre\n");
        scanf("%d", decisao2);

        switch (decisao2)
        {
        case 'Rei':
        case 'rei':
            printf("Você escolheu Rei\n");
            break;
        case 'Bispo':
        case 'bispo':
            printf("Você escolheu Bispo\n");

        default:
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