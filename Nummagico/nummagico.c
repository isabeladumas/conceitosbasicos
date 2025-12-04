#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroMagico, palpite, tentativas = 5;

    srand(time(NULL));  
    numeroMagico = rand() % 50 + 1; // número aleatório entre 1 e 50

    printf("=== Jogo: Adivinhe o Numero ===\n");
    printf("Tente adivinhar o numero magico entre 1 e 50.\n");
    printf("Voce tem %d tentativas!\n\n", tentativas);

    for (int i = 1; i <= tentativas; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &palpite);

        if (palpite == numeroMagico) {
            printf("PARABENS! Voce acertou o numero!\n");
            return 0;
        }

        int diferenca = abs(palpite - numeroMagico);

        if (diferenca <= 3) {
            printf("Voce esta chegando perto!\n");
        }

        if (palpite < numeroMagico) {
            printf("O numero magico eh MAIOR que %d.\n\n", palpite);
        } else {
            printf("O numero magico eh MENOR que %d.\n\n", palpite);
        }
    }
    return 0;
}
