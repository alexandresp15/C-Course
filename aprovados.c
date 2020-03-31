#include <stdio.h>

int main() {
    int N, i;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char nome[N][10];
    double num1[N], num2[N];

    for (i = 0; i < N; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno\n", i + 1);
        getchar(); 
        fgets(nome[i], 10, stdin);
        scanf("%lf %lf", &num1[i], &num2[i]);
    }
    
    printf("Alunos aprovados:\n");

    for (i = 0; i < N; i++) {
        media = (num1[i] + num2[i]) / 2.0;
        if (media >= 6.0) {
            printf("%s", nome[i]);
        }
    }
    return 0; 

}
