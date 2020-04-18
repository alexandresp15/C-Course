#include <stdio.h>

int main () {
    int N, prod, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++) {
        prod = N * i;
        printf("%d X %d = %d\n", N, i, prod);
    }
    return 0;
}
