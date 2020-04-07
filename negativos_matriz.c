#include <stdio.h>

int main() {
    int M, N;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &N);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &M);

    int mat[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("Elementos [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("VALORES NEGATIVOS:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mat[i][j] < 0) {
                printf("%d\n", mat[i][j]);
            }
        }
    }

    return 0;
}
