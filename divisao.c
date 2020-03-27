#include <stdio.h>

int main() {
    int N, numerador, denominador;
    double R;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);
        
        if (denominador != 0) {
            R = (double) numerador / denominador;
            printf("DIVISAO = %.2lf\n", R);
        }
        else {
            printf("DIVISAO IMPOSSIVEL\n");
        }
        
    }
    return 0;
}
