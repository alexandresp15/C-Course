#include <stdio.h>

int main() {
    int N, num;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        
        if (num != 0) {
            if(num % 2 != 0) {
                printf("IMPAR ");
            }
            else {
                printf("PAR ");
            }

            if(num > 0) {
                printf("POSITIVO\n");
            }
            else {
                printf("NEGATIVO\n");
            }
        }
        else 
            printf("NULO\n");
    }
    return 0;
}
