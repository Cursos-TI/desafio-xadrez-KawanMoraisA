#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispoMaximo, torreMaximo, rainhaMaximo, cavaloMaximo;

    bispoMaximo = 5;
    torreMaximo = 5;
    rainhaMaximo = 8;
    cavaloMaximo = 3;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int i = 0;
    while (i < bispoMaximo){

        printf("Bispo se moveu para: Cima Direita \n\n");
        i++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int j = 0; j < torreMaximo; j++)
    {
        printf("Torre se moveu para: direita \n\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int k = 0;
    do
    {
        printf("Rainha se moveu para: esquerda \n\n");
        k++;
    } while (k < rainhaMaximo);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int g = 1; g <= cavaloMaximo ; g++)
    {
        if(g < 3){
        printf("Cavalo se moveu para: baixo\n");
        } else if (g == 3){
            while (g <= 3){
            printf("Cavalo se moveu para: esquerda\n");
            g++;
        }
        }
        ;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
