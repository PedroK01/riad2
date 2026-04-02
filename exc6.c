#include <stdio.h>

int main() {
    int vetor[10];

    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("\nVetor resultante:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}