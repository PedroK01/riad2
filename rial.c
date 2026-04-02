#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    const int MIN = 1;
    const int MAX = 100;

    srand((unsigned)time(NULL));
    int secret = (rand() % (MAX - MIN + 1)) + MIN;
    int guess = 0;
    int attempts = 0;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar um número entre %d e %d.\n", MIN, MAX);

    while (1) {
        printf("Digite seu palpite: ");
        if (scanf("%d", &guess) != 1) {
            // Qualquer entrada inválida limpa o buffer e pede de novo
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Entrada inválida. Digite um número inteiro.\n");
            continue;
        }

        attempts++;

        if (guess < secret) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (guess > secret) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativa(s).\n", attempts);
            break;
        }
    }

    return 0;
}