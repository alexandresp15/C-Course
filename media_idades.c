#include <stdio.h>

int main() {
    int idade, cont;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);
    
    media = 0.0;
    cont = 0;
    if (idade >=0) {
        while (idade >= 0) {
            media = media + idade;
            cont = cont + 1;
            scanf("%d\n", &idade);
        }
        media = media / cont;
        printf("MEDIA %.2lf", media);
    }
    else {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    return 0;
}
