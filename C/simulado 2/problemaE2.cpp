#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int lf, cf, lp, cp, linha = 0;
    char mat[40];

    while(scanf("%[^\n]s", mat) == 1) {
        getchar();
        for (int i = 0; i < strlen(mat); i++) {
            if (mat[i] == 'p') {
                cp = i/2;
                lp = linha;
            }
            if (mat[i] == 'f') {
                cf = i/2;
                lf = linha;
            }
        }
        linha++;
    }
    printf("%d\n", abs(lp-lf)+abs(cp-cf));
}