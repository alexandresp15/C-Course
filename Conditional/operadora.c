#include <stdio.h>

int main() {
    double valor;
    int qtdMin;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &qtdMin);

    if (qtdMin > 100) {
        valor = (qtdMin - 100) * 2.0 + 50.00;
        printf("Valor a pagar: R$%.2lf\n", valor);
    }
    else {
        printf("Valor a pagar: R$50.00\n");
    }
    return 0;
}
