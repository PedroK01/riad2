#include <stdio.h>

int main() {
    int vetor[8];
    int numero, encontrado = 0;

    // Leitura dos valores
    printf("Digite 8 numeros:\n");
    for(int i = 0; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Número a ser buscado
    printf("\nDigite um numero para buscar: ");
    scanf("%d", &numero);

    // Busca no vetor
    for(int i = 0; i < 8; i++) {
        if(vetor[i] == numero) {
            printf("Numero encontrado na posicao (indice): %d\n", i);
            encontrado = 1;
        }
    }

    // Caso não encontre
    if(encontrado == 0) {
        printf("Numero nao encontrado no vetor.\n");
    }

    return 0;
}