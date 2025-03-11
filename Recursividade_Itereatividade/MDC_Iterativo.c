#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int resultadoMDC = mdc(a,b);
    printf("O MDC de %d e %d é: %d\n", a, b, resultadoMDC);

    return 0;
}

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}