#include <stdio.h>

int main() {
    // Simulando o movimento da Torre com um loop "for"
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Simulando o movimento do Bispo com um loop "while"
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    // Simulando o movimento da Rainha com um loop "do-while"
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= 8);

    return 0;
}