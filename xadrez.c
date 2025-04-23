#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torre(int n){
    if(n > 0){
        printf("Direita\n");
        torre(n - 1);

    }
}

void rainha(int n){
    if(n > 0){
        printf("Esquerda\n");
        rainha(n - 1);
    }
}

void bispo(int n){
    if(n > 0){
        printf("Cima, ");
        for(int i = 0; i < 1; i++){
            printf("direita\n");
        }
        bispo(n - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //torre
    printf("Torre:\n");
    torre(5);
    //rainha
    printf("\nRainha\n");
    rainha(8);

    //bispo
    printf("\nBispo: \n");
    bispo(5);
    
    //cavalo
    int c = 0;
    printf("\nCavalo: \n");
    do{
        for(int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("direita\n");
        c++;
    }while(c < 1);

    return 0;
}
