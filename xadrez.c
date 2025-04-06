#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Direita\n", 6 - casas); // Exibe o movimento
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Casa %d: Esquerda\n", 9 - casas);
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int casas, int etapa) {
    if (casas == 0) return;
    printf("Casa %d: Cima, Direita\n", etapa);
    moverBispo(casas - 1, etapa + 1);
}

// Simulação do movimento do Cavalo com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int i = 1; i <= 2; i++) { // Movendo 2 casas para cima
        printf("Casa %d: Cima\n", i);
    }

    int contadorCavalo = 1;
    while (contadorCavalo <= 1) { // Movendo 1 casa para a direita
        if (contadorCavalo == 1) {
            printf("Casa 3: Direita\n");
        }
        contadorCavalo++;
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // Movimento do Bispo com recursão
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(5, 1);

    // Movimento da Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // Movimento do Cavalo com loops aninhados e controle de fluxo
    moverCavalo();

    return 0;
}
