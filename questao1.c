#include <stdio.h>

int main() {
    double S = 0.0;
    int numerador = 1;
    int denominador = 1;

    for (int i = 1; i <= 50; i++) {
        S += (double)numerador / denominador;
        numerador += 2;
        denominador++;
    }

    printf("O valor de S é: %.2lf\n", S);

    return 0;
}
