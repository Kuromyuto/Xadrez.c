#include <stdio.h>

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
        printf("Você tem Rei, Bispo e torre, Qual das peças deseja seguir");
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

            i = 0;

            do {
            printf("Esquerda\n");
            i++;
            } while(i < 8);
            
            break;
        case 'B':
            printf("Você escolheu Bispo\n");
            i = 0;

            while(i < 5) {
            printf("Cima, Direita\n");
            i++;
}
            break;
        case 'T':
            printf("Você escolheu Torre!\n");
            for(i = 0; i < 5; i++) {
             printf("Direita\n");
             }
            break;
            case 'C':
            printf("Você escolheu Cavalo\n");
            int esquerda = 1;
            while(esquerda--){
                for(int cima = 0; cima < 2; cima++){
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
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