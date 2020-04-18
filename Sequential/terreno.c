#include <stdio.h>

int main() {

    double area, valor, width, length;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &width);
    printf("Digite o comprimento do terrono: ");
    scanf("%lf", &length);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);
    
    area = (width * length);
    valor = (valor * area);

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", valor);

    return 0;

}
