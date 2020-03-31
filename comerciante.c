#include <stdio.h>

int main() {
    int N, i, abaixo, entre, acima;
    double porcentagemLucro, totalCompra, totalVenda, totalLucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);
    
    char nome[10][N];
    double pCompra[N], pVenda[N];
    
    for (i = 0; i < N; i++) {
        printf("Produto %d\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(nome[i], 10, stdin);
        printf("Preco de compra: ");
        scanf("%lf", &pCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &pVenda[i]);
    } 

    abaixo = 0;
    entre = 0;
    acima = 0;
    totalCompra = 0;
    totalVenda = 0;
    for (i = 0; i < N; i++) {
        porcentagemLucro = (pVenda[i] - pCompra[i]) / pCompra[i] * 100;
        if (porcentagemLucro < 10) {
            abaixo++;
        }
        else if (porcentagemLucro < 20) {
            entre++;
        }
        else {
            acima++;
        }
        totalCompra = totalCompra + pCompra[i];
        totalVenda = totalVenda + pVenda[i]; 
    }

    totalLucro = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);
    return 0;
}
