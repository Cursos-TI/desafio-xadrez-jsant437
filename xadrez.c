#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;
const int casasCavaloH = 1;
const int casasCavaloV = 2;

void moverBispo(int casas) {
    if (casas == 0) return;
    
    for(int y = 0; y < 1; y++)
    {
        printf("Cima\n");
        for(int x = 0; x < 1; x++)
        {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverTorre(int casas) {
    if (casas == 0) return;
    
    printf("Direita\n");

    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    
    printf("Esquerda\n");

    moverRainha(casas - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int casa = 0;

    /*
    printf("Movimento bispo:\n");
    while(casa < casasBispo)
    {
        casa++;
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    casa = 0;
    printf("\nMovimento torre:\n");
    do
    {
        casa++;
        printf("Direita\n");
    }
    while(casa < casasTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimento rainha:\n");
    for(casa = 0; casa < casasRainha; casa++)
    {
        printf("Esquerda\n");
    }
    */
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    casa = 0;
    printf("\nMovimento cavalo:\n");
    for(int x = 0; x < casasCavaloH; x++)
    {
        if(x >= casasCavaloH)
        {
            continue;
        }

        for(int y = 0; y < casasCavaloV; y++)
        {
            if(y >= casasCavaloV)
            {
                break;
            }
            printf("Cima, ");
        }

        printf("Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\nMovimento bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento rainha:\n");
    moverRainha(casasRainha);
    return 0;
}
