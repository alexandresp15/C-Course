#include <stdio.h>

int main() {
    int i, N, menor;
    double media, soma, percentual;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][10];
    int idade[N]; 
    double altura[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(nome[i], 10 , stdin);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    } 
    
    menor = 0;
    soma = 0;
    for (i = 0; i < N; i++) {
        soma = soma + altura[i]; 
        if (idade[i] < 16) {
            menor++;
        }
    }
    
    media = (double) soma / N;
    percentual = (double) menor / N * 100;
    printf ("\nAltura média: %.2lf\n", media);
    printf ("Pessoas com menos de 16 anos: %.1lf%\n", percentual);
    for (i = 0; i < N; i++) {
        if (idade[i] < 16) {
            printf("%s", nome[i]);
        }
    }
    return 0;
}
