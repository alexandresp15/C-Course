#include <stdio.h>

int main() {
    int i, N, par;
    
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int num[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    par = 0;
    printf("NUMEROS PARES:\n");
    for (i = 0; i < N; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
            par++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", par);
    return 0;
       
}
