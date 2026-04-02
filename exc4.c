#include <stdio.h>

int main() {
    int original[10];
    int pares[10], impares[10];
    int p = 0, i = 0;

    printf("Digite 10 numeros inteiros:\n");
    for(int j = 0; j < 10; j++) {
        printf("Numero %d: ", j + 1);
        scanf("%d", &original[j]);
    }

    for(int j = 0; j < 10; j++) {
        if(original[j] % 2 == 0) {
            pares[p++] = original[j];
        } else {
            impares[i++] = original[j];
        }
    }

    printf("\nVetor original:\n");
    for(int j = 0; j < 10; j++) {
        printf("%d ", original[j]);
    }

    printf("\n\nNumeros pares:\n");
    for(int j = 0; j < p; j++) {
        printf("%d ", pares[j]);
    }

    printf("\n\nNumeros impares:\n");
    for(int j = 0; j < i; j++) {
        printf("%d ", impares[j]);
    }

    printf("\n");
    return 0;
}