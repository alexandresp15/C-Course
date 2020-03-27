#include <stdio.h>

int main() {
    int N, cont, prod;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &N);
    
    cont = 1;
    while (cont <= 10) {
        prod = N * cont;
        printf("%d x %d = %d\n", N, cont, prod);
        cont = cont + 1;
    }
    return 0;
}
