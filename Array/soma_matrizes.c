#include <stdio.h>

int main() {
    int M, N;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &N);

    int matA[M][N], matB[M][N], matC[M][N];

    printf("Digite os valores da matriz A:\n");

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    return 0;
}
