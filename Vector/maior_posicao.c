#include <stdio.h>

int main() {
    int i, N, posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double num[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &num[i]);
    }

    maior = num[0];
    posicao = 0;
    for (i = 0; i < N; i++) {
        if(num[i] > maior) {
            maior = num[i];
            posicao = i;
        }
    }
    printf("MAIOR VALOR = %.1lf\nPOSICAO DO MAIOR VALOR = %d\n", maior, posicao);

    return 0;
}
