#include <stdio.h>

int main() {

    double A, B, C, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    quadrado = A * A;
    triangulo = (A * B) / 2.0;
    trapezio = (A + B) * C / 2;
    printf("AREA DO QUADRADO = %.4lf\n", quadrado);
    printf("AREA DO TRAINGULO = %.4lf\n", triangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", trapezio);

    return 0;
}
