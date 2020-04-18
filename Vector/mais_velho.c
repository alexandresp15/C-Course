#include <stdio.h>

int main() {
    int N, i, idadeMaior, maisVelho;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nome[N][10];
    int idade[N];

    for (i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        getchar();
        fgets(nome[i], 10, stdin);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }
    
    idadeMaior = idade[0];
    maisVelho = 0;
    for (i = 0; i < N; i++) {
        if (idade[i] > idadeMaior) {
            idadeMaior = idade[i];
             maisVelho = i;
        }
    }
    
    printf("PESSOA MAIS VELHA: %s\n", nome[maisVelho]);
    return 0;
}
