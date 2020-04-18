#include <stdio.h>

int main() {
    int i, N;

    printf("Qualtos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int vetA[N], vetB[N], vetR[N];

    printf("Digite os valores do vetor A:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vetA[i]);
    }
    
    printf("Digite os valores do vetor B:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &vetB[i]);
    }
    
    
    printf("VETOR RESULTANTE:\n"); 
    for (i = 0; i < N; i++) {
        vetR[i] = vetA[i] + vetB[i]; 
        printf("%d\n", vetR[i]); 
    } 
    return 0;
}
