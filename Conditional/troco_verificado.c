#include <stdio.h>

int main() {
    double total, preco_unit, dinheiro, troco;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unit);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = preco_unit * qtd;
    if (total > dinheiro) {
        troco = total - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", troco);
    }
    else {
        troco = dinheiro - total;
        printf("TROCO %.2lf\n", troco);
    }
    return 0;
}
