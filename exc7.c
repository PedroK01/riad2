#include <stdio.h>

int main() {
    int v1[5], v2[5], intersec[5];
    int k = 0;

    printf("Digite os 5 elementos do primeiro vetor:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite os 5 elementos do segundo vetor:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &v2[i]);
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(v1[i] == v2[j]) {
                
                int existe = 0;
                for(int m = 0; m < k; m++) {
                    if(intersec[m] == v1[i]) {
                        existe = 1;
                        break;
                    }
                }

                if(!existe) {
                    intersec[k] = v1[i];
                    k++;
                }
            }
        }
    }

    printf("\nElementos em comum:\n");
    for(int i = 0; i < k; i++) {
        printf("%d ", intersec[i]);
    }

    if(k == 0) {
        printf("Nenhum elemento em comum.");
    }

    printf("\n");

    return 0;
}