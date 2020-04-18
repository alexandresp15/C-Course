#include <stdio.h>

int main () {
    int i, N;
    double mediaPar;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    int totalPar = 0, somaPar = 0;   

    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0 ) {
            somaPar = somaPar + vet[i];
            totalPar++;
        }
    }
   
    if (totalPar > 0 ) {
        mediaPar = somaPar / totalPar; 
        printf("MEDIA DOS PARES = %.1lf\n", mediaPar);
    }
    else {
        printf("NENHUM NUMERO PAR\n");
    }
    
    return 0;
}
