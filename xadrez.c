#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispoMaximo, torreMaximo, rainhaMaximo;
    char movimento[32];

    bispoMaximo = 5;
    torreMaximo = 5;
    rainhaMaximo = 5;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 0; i < bispoMaximo; i++)
    {
        printf("Escolha uma direção pro bispo(%d movimentos restantes): \n", (bispoMaximo - i));
        printf("--CimaDireita; CimaEsquerda; BaixoDireita; BaixoEsquerda--\n");
        scanf("%s", movimento);

        printf("Bispo se moveu para: %s \n\n", movimento);
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int i = 0; i < torreMaximo; i++)
    {
        printf("Escolha uma direção pro bispo(%d movimentos restantes): \n", (torreMaximo - i));
        printf("--Cima; Baixo; Direita; Esquerda--\n");
        scanf("%s", movimento);

        printf("Bispo se moveu para: %s \n\n", movimento);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int i = 0; i < rainhaMaximo; i++)
    {
        printf("Escolha uma direção pro bispo(%d movimentos restantes): \n", (rainhaMaximo - i));
        printf("--Qualquer direção--\n");
        scanf("%s", movimento);

        printf("Bispo se moveu para: %s \n\n", movimento);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
