#include <stdio.h>

int main() {

    double pi, raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    pi = 3.14159;
    area = (raio * raio)*pi;
    printf("AREA = %.3lf\n", area);

    return 0;
}
