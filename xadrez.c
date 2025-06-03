#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bispoMovimento(int n) {
    if (n == 0) return;  // vai parar quando chegar a 0

    printf("Bispo: Cima Direita \n");

    bispoMovimento(n - 1);
}

void torreMovimento(int n){
    if (n == 0) return;

    printf("Torre: Direita\n");
    torreMovimento(n - 1);
}

void rainhaMovimento(int n){
    if (n == 0) return;

    printf("Rainha: Esquerda\n");
    rainhaMovimento(n - 1);
}

void cavaloMovimento(int n){
    if (n == 1){
        printf("Cavalo: Direita\n");
        return;
    } else{
        printf("Cavalo:Cima\n");
    }
    cavaloMovimento(n - 1);
}


int main() {
    int bispoMaximo, torreMaximo, rainhaMaximo, cavaloMaximo;

    bispoMaximo = 5;
    torreMaximo = 5;
    rainhaMaximo = 8;
    cavaloMaximo = 3;

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    bispoMovimento(bispoMaximo);

    torreMovimento(torreMaximo);

    rainhaMovimento(rainhaMaximo);

    cavaloMovimento(cavaloMaximo);

    return 0;
}
