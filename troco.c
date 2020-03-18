#include <stdio.h>

int main() {
    
    int qtd;
    double preco, troco, dinheiro;

    printf("Preço unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco * qtd);
    printf("TROCO = %.2lf\n", troco);


    return 0;
}
