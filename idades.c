#include <stdio.h>

int main() {

    char nome1[11], nome2[11];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome1, 10, stdin);
    printf("Idade: ");
    scanf("%d", &idade1);
    getchar();

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fgets(nome2, 10, stdin);
    printf("Idade: "); 
    scanf("%d", &idade2);
    getchar();

    media = (double)(idade1 + idade2) / 2; 
    printf("A idade media de %s e %s eh de %.1lf anos\n\n", nome1, nome2, media);    

    return 0;
}
