#include <stdio.h>
#include <math.h>

int main () {

  int N;
  printf("Qual a ordem da matriz? ");
  scanf("%d", &N);

  double mat[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("Elemento [%d,%d]: ", i, j);
      scanf("%lf", &mat[i][j]);
    }
  }

  double positivo = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (mat[i][j] > 0) {
        positivo = positivo + mat[i][j];
      }
    }
  }

  printf("\nSOMA DOS POSITIVOS: %.1lf", positivo);

  int num;
  printf("\n\nEscolha uma linha: ");
  scanf("%d", &num);


  printf("LINHA ESCOLHIDA: ");

  int j = 0;
  for (int i = num; j < N; j++) {
    printf("%.1lf ", mat[i][j]);
  }

  printf("\n\nEscolha uma coluna: ");
  scanf("%d", &num);


  printf("COLUNA ESCOLHIDA: ");
  int i = 0;
  for (int j = num; i < N; i++) {
    printf("%.1lf ", mat[i][j]);
  }

  printf("\n\nDIAGONAL PRINCIPAL: ");

  for (int i = 0; i < N; i++) {
    printf("%.1lf ", mat[i][i]);
  }

  printf("\n\nMATRIZ ALTERADA:\n");

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (mat[i][j] < 0) {
        mat[i][j] = pow(mat[i][j], 2);
      }
      printf("%.1lf ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
