int main() {
    int numero = rand() % 100 + 1;
    int palpite;
    int tentativas;
    int historico[10];
    int i = 0;
    char opcao;

    do {
        numero = rand(0) % 100 + 1;
        tentativas = 0;

        printf("Adivinhe o numero de 1 a 100\n");

        do {
            printf("Palpite: ");
            scanf("%d", &palpite);
            tentativas++;

            if (palpite > numero) {
                printf("Alto\n");
            } else if (palpite < numero) {
                printf("Baixo\n");
            }

        } while (palpite != numero);

        printf("Acertou em %d tentativas\n", tentativas);

        if (i < 10) {
            historico[i] = tentativas;
            i++;
        }

        printf("Historico:\n");
        for (int j = 0; j < i; j++) {
            printf("%d tentativas\n", historico[j]);
        }

        printf("Jogar novamente? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's');

    return 0;
}