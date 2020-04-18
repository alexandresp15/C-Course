#include <stdio.h>

int main() {
    int i, N, qtdHomem, qtdMulher;
    double maiorAltura, menorAltura, somaAltura, mediaMulher;

    printf("Quantas pessoal serao digitadas? ");
    scanf("%d", &N);
    
    double altura[N];
    char genero[N];

    for (i = 0; i < N; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i + 1);
        getchar();
        scanf("%s", &genero[i]);
    }

    maiorAltura = altura[0];
    menorAltura = altura[0];
    somaAltura = 0;
    qtdMulher = 0;
    qtdHomem = 0;
    for (i = 0; i < N; i++) {
        if (altura[i] > maiorAltura) {
            maiorAltura = altura[i];
        }
        if (altura[i] < menorAltura) {
            menorAltura = altura[i];
        }
        if (genero[i] == 'F') {
            somaAltura = somaAltura + altura[i];
            qtdMulher++;
        }
        else {
            qtdHomem++;
        }
    }

    mediaMulher = somaAltura / qtdMulher;
    printf("Menor altura = %.2lf\nMaior altura = %.2lf\n", menorAltura, maiorAltura);
    printf("Media das alturas das mulheres = %.2lf\n", mediaMulher);
    printf("Numero de homens = %d\n", qtdHomem);

    return 0;
}
