#include <stdio.h>

int main () {
    int cod, qtd;
    double prod, valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &cod);
    printf("Valor a pagar: ");
    scanf("%d", &qtd);
    
    if (cod == 1) {
        prod = 5.00;
    }    
    else if (cod == 2) {
        prod = 3.50;
    }
    else if (cod == 3) {
        prod = 4.80;
    }
    else if (cod == 4) {
        prod = 8.90;
    }
    else if (cod == 5) {
        prod = 7.32;
    }
    valor = qtd * prod;
    printf("Valor a pagar: R$ %.2lf\n", valor);
    return 0;
}
