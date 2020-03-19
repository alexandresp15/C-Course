#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, X1, X2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);
    printf("Delta = %.2lf\n", delta);

    if (delta >= 0 && a != 0) {
        X1 = ((-b) + sqrt(delta)) / (2 * a);
        X2 = ((-b) - sqrt(delta)) / (2 * a);
        printf("X1 = %.4lf\nX2 = %.4lf\n", X1, X2);
    }
    else {
        printf("Esta equacao nao possui raizes reais\n");
    }
    
}
