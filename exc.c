#include <stdio.h>

int main() {
    int numeros[5];
    
    printf("Digite 5 numeros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nNumeros na ordem inversa:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}