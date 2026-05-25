#include <stdio.h>

int main(){
    int numero, i;
    
    printf("Digite um numero(Negativo para sair)\n");
    scanf("%d", &numero);

    while (numero >= 0){
        printf("O numero é: %d \n", numero);
        printf("Digite um numero (Negativo para sair)\n");
        scanf("%d", &numero);
    }

    printf("O numero digitado é negativo, saindo...");
    
    return 0;
}