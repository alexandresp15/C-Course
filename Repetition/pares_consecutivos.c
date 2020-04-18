#include <stdio.h>

int main() {
    int X, i, soma;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &X);
    
    while (X != 0) {
        if (X % 2 != 0) {
            X++;
        } 

        soma = 5 * X + 20;
        printf("SOMA = %d\n", soma);

        printf("Digite um numero inteiro: ");
        scanf("%d",&X);
    }
    return 0;
}
