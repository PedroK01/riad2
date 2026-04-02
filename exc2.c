#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0.0;
    
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    printf("\nSoma dos valores: %.2f\n", soma);

    return 0;
}