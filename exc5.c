#include <stdio.h>

int main() {
    float numeros[15];
    float soma = 0, maior, menor, media;

    for(int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);

        soma += numeros[i];

        if(i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    media = soma / 15;

    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Média aritmética: %.2f\n", media);

    return 0;
}