#include <stdio.h>

int main() {
    int G;
    scanf("%d", &G);

    int rows = 1 << G; // Calcula o número de linhas (2^G)

    for (int i = 0; i < rows; i++) {
        for (int j = G - 1; j >= 0; j--) {
            printf("%d", (i >> j) & 1); // Calcula o valor na coluna j
            if(j>0)printf(" ");
        }
        printf("\n");
    }

    return 0;
}
