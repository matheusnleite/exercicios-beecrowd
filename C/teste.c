#include <stdio.h>

int main() {
    char nome[50];
    float b, c;
    printf("");
    scanf("%s",&nome);
    printf("");
    scanf("%f", &b);
    printf("");
    scanf("%f", &c);
    printf("TOTAL = R$ %.2f\n", b+(0.15*c));

    return 0;
}
