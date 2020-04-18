#include <stdio.h>

int main() {
    int i, N;
    double soma, media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
   
    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + vet[i];
    } 
    
    media = soma / N;
    printf("\nMEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (i = 0; i < N; i++) {
      if (vet[i] < media) {
          printf("%.1lf\n", vet[i]);
      } 
    }
    return 0;
}
